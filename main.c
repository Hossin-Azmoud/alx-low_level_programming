#include <stdio.h>
#include <stdlib.h>


#define LINES_CAP 6
#define BUFF_DEFAULT 32
#define EOL '\n'

void print_err(char *s)
{
	fprintf(stderr, "[ERROR] %s", s);
}

void print_info(char *s)
{
	fprintf(stderr, "[INFO] %s", s);
}

typedef struct line_s
{
	char   *buff;
	size_t cap;
	size_t len;
} line_t;

typedef struct lines_container_s
{
	line_t *lines;
	size_t cap;
	size_t len;
} lines_container_t;

void prep_buffers(line_t *lines, int size)
{
	int it;

	for (it = 0; it < size; ++it)
	{
		(lines + it)->buff = malloc(sizeof(char) * BUFF_DEFAULT);
		(lines + it)->cap  = BUFF_DEFAULT;
		(lines + it)->len  = 0;
	}
}

char read_line(FILE *Stream, line_t *line)
{
	char byte;

	if (line == NULL || Stream == NULL)
		return (EOF);

	byte = fgetc(Stream);
	while (byte != EOF && byte != EOL)
	{
		line->buff[line->len++] = byte;

		if (line->len + 1 == line->cap)
		{
			line->buff = realloc(line->buff, line->cap * 2);
			line->cap *= 2;
		}

		byte = fgetc(Stream);
	}

	return (byte);
}

void line_container_free(lines_container_t *container)
{
	size_t it;
	while (it < container->cap)
	{
		free(container->lines[it].buff);
		free(container->lines + it);
		it++;
	}
	free(container);
}

lines_container_t *read_lines(FILE *Stream)
{
	lines_container_t *lines_container = malloc(sizeof(lines_container_t));
	char latest_byte = 'A';
	size_t idx = 0;

	if (Stream == NULL)
		return (NULL);

	lines_container->lines = malloc(sizeof(line_t) * LINES_CAP);

	if (lines_container->lines == NULL)
	{
		print_err("Allocating lines failed.!\n");
		return (NULL);
	}

	lines_container->cap   = LINES_CAP;
	lines_container->len   = 0;

	prep_buffers(lines_container->lines, LINES_CAP);
	while (latest_byte != EOF)
	{
		latest_byte = read_line(Stream, (lines_container->lines + idx));
		printf("read: %s\n",  (lines_container->lines + idx)->buff);
		idx++;
		lines_container->len++;

		if ((idx + 1) == LINES_CAP)
		{
			return (lines_container);
		}
	}

	return (lines_container);
}


int main(int argc, char **argv)
{
	FILE *fp;
	char fragment;
	char *prog = argv[0];
	char *file;
	lines_container_t *container = {0};

	if (argc < 2)
	{
		printf("[USAGE] %s file_name\n", prog);
		print_err("The File was not specified.\n");
		return (1);
	}

	print_info("opening file ");
	file = argv[1];
	puts(file);

	fp = fopen(file, "r");
	print_info("file opened\n");

	container = read_lines(fp);
	printf("READ: %zu\n", container->len);
	printf("MEM: %zu\n", container->cap);
	line_container_free(container);


	fclose(fp);
	print_info("file closed\n");
	return (0);
}

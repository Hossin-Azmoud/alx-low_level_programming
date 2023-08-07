#include "main.h"
#include "main.h"
/**
 * create_file - create a file and put some content inside it
 * if it does not exist.
 * @filename: name of the file to create
 * @text_content: text that will be written.
 * Return: 1 on success and -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, len, nwrite;

	if (!filename)
		return (-1);

	if (!text_content)
		len = 0;
	else
		len = strlen(text_content);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	nwrite = write(fd, text_content, len);
	if (nwrite == 1)
		return (-1);

	close(fd);

	return (1);
}

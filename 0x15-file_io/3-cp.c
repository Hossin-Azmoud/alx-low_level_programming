#include "main.h"

/**
 * check_args - checks 97
 * @argc: number of arguments
 * Return: void
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_reading - checks 98
 * @check: checks if true of false
 * @file: file_from name
 * @file_from: file descriptor of file_from, or -1
 * @file_to: file descriptor of file_to, or -1
 * Return: void
 */
void check_reading(ssize_t check, char *file, int file_from, int file_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (file_from != -1)
			close(file_from);
		if (file_to != -1)
			close(file_to);
		exit(98);
	}
}

/**
 * check_writing - check 99
 * @check: checks if true of false
 * @file: file_to name
 * @file_from: file descriptor of file_from, or -1
 * @file_to: file descriptor of file_to, or -1
 * Return: void
 */
void check_writing(ssize_t check, char *file, int file_from, int file_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (file_from != -1)
			close(file_from);
		if (file_to != -1)
			close(file_to);
		exit(99);
	}
}

/**
 * check_closing - 100
 * @check: checks if true or false
 * @fd: file descriptor
 * Return: void
 */
void check_closing(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - check the code
 * @argc: number of args
 * @argv: args list
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_to, close_from;
	ssize_t read_chunk, w_chunk;
	char buffer[1024];
	mode_t file_perm;

	check_args(argc);
	file_from = open(argv[1], O_RDONLY);
	check_reading((ssize_t)file_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check_writing((ssize_t)file_to, argv[2], file_from, -1);
	read_chunk = 1024;

	while (read_chunk == 1024)
	{
		read_chunk = read(file_from, buffer, 1024);
		check_reading(read_chunk, argv[1], file_from, file_to);
		w_chunk = write(file_to, buffer, read_chunk);

		if (w_chunk != read_chunk)
			w_chunk = -1;

		check_writing(w_chunk, argv[2], file_from, file_to);
	}

	close_to = close(file_to);
	close_from = close(file_from);
	check_closing(close_to, file_to);
	check_closing(close_from, file_from);

	return (0);
}


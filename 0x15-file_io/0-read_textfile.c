#include "main.h"
/**
 * read_textfile - read a text file and prints it
 *
 * @filename: file to read
 * @letters: size of bytes to print
 *
 * Return: actual number of letters it should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, nread, nwrite;
	char *bytes;

	if (filename == NULL)
		return (0);

	bytes = malloc(sizeof(char) * letters);
	if (!bytes)
		return (0);

	fd = open(filename, O_RDONLY);
	nread = read(fd, bytes, letters);
	nwrite = write(STDOUT_FILENO, bytes, nread);

	if (fd == -1 || nread == -1 || nwrite == -1 || nwrite != nread)
	{
		free(bytes);
		return (0);
	}

	free(bytes);
	if (close(fd) == -1)
		return (0);

	return (nwrite);
}

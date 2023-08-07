#include "main.h"
/**
* append_text_to_file - a file that appends text to a file.
* @filename: the filename.
* @text_content: content to be added.
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, len, write_f;

	if (!filename)
		return (-1);

	if (!text_content)
		len = 0;
	else
		len = strlen(text_content);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	write_f = write(fd, text_content, len);
	if (write_f == 1)
		return (-1);

	close(fd);

	return (1);
}

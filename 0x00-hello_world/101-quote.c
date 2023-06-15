#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - Entry point.
 * prints a string to stderr then exits with 1.
 * Return: 1 (FAILURE)
 */

int main(void)
{
	write(STDERR_FILENO,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		59);
	return (1);
}

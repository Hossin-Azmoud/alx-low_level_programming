#include <string.h>
#include <stdio.h>




/**
 * main - fizz buzz..
 *
 * Return: Always 0.
 */
int main(void)
{
	int  it = 1;
	char string[10];

	while (it <= 100)
	{
		strcpy(string, "");

		if (it % 3 == 0)
		{
			strcpy(string, "Fizz");
		}

		if (it % 5 == 0)
		{
			strcat(string, "Buzz");
		}

		if (strlen(string) > 0)
		{
			printf("%s", string);
		} else
		{
			printf("%i", it);
		}

		if (it != 100)
		{
			printf(" ");
		}
		it++;
	}

	printf("\n");
	return (0);
}

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/* MOODY */
/**
 * main - program that generates random valid pwds
 * Return: Always 0 (Success)
 */
int main(void)
{
	int *password = malloc(100);
	int it = 0, sum, k;

	sum = 0;
	srand(time(NULL));
	while (it < 100)
	{
		password[it] = rand() % 78;

		sum += (password[it] + '0');
		putchar(password[it] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			k = 2772 - sum - '0';
			sum += k;
			putchar(k + '0');
			break;
		}

		it++;
	}

	free(password);
	return (0);
}

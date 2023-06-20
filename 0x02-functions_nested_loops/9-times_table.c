#include "main.h"
/**
 * times_table - function that prints time table
 * Return: void.
 */

void times_table(void)
{
	int first_number = 0;
	int second_number = 0;
	int condition1, condition2, condition3;
	int num1, num2;

	for (first_number = 0; first_number <= 9; first_number++)
	{
		for (second_number = 0; second_number <= 9; second_number++)
		{
			printf("%d", first_number * second_number);
			fflush(stdout);
			num1 = first_number * (second_number + 1);
			num2 = (first_number * (second_number + 1)) % 10;
			condition2 = (int)(num1 == num2);
			num1 = first_number * second_number;	
			condition1 = (int)(num1 == num1 % 10);
			condition3 = (int)(second_number != 9);

			if (condition1 && condition2 && condition3)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				continue;
			}
			
			if (condition3)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}

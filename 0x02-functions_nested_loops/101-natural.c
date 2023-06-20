#include "main.h"

/**
 * main - Entry Point
 * Return: 0 Always (SUCCESS)
 */
void main(void)
{
	
	int sum = 0;
	char buff[MAX];
	int i = 0;
	
	while(i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	
	i = convert_int_to_ascii(sum, buff);
	
	while(buff[i])
	{
		_putchar(buff[i]);
		i++;
	}
}

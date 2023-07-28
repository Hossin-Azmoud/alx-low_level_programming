#include "main.h"

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
	
	char *str;
	int n;

    str = "sapsapskpaksas-120asaspapsapkspak";
    
	n = _atoi(str);
	
	printf("%s => %i\n", str, n);

	return (0);
}

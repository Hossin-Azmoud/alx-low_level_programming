#include "main.h"

int main()
{
	char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("s1: %s\n", s1);
    printf("s2: %s", s2);
    ptr = _strcat(s1, s2);
    printf("s1 a: %s", s1);
    printf("s2 a:%s", s2);
    printf("ptr a:%s", ptr);
    return (0);    
	return (0);
}

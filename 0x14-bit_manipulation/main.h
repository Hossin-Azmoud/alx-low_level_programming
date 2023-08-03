#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
unsigned int binary_to_uint(const char *b);
int _putchar(char c);
int _strlen(const char *s);
unsigned int _pow(int base, int power);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif /* MAIN_H */

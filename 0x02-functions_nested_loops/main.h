#ifndef MAIN__H
#define MAIN__H
#define BOUND 98
#define MAX   10
#define EOB   '\0'

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int  _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int  _islower(int c);
int  _isalpha(int c);
int  print_sign(int n);
int  _abs(int n);
int  print_last_digit(int n);
void jack_bauer(void);
void times_table(void);
int  add(int a, int b);
void print_to_98(int n);
int  convert_int_to_ascii(int n, char *buff);
void print_times_table(int n);

#endif /* MAIN__H */


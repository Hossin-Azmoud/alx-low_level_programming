#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdlib.h>

int  **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int  _strlen(char *s);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif /* MAIN_H */

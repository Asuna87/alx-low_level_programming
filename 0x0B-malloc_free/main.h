#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
/* From 100-argstostr.c */
char *argstostr(int ac, char **av);

/* From 101-strtow.c */
char **strtow(char *str);

/* Provided _putchar function */
int _putchar(char c);

#endif /* MAIN_H */


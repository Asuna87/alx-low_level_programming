#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/* Function prototypes */
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);

#endif /* MAIN_H */


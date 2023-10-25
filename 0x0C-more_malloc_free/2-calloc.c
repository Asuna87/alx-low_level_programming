#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - Allocates memory for an array and initializes it with zero
* @nmemb: Number of elements in the array
* @size: Size of each element in bytes
*
* Return: Pointer to the allocated memory
*         NULL if nmemb or size is 0, or if malloc fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size,i;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;
ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);

/* Initialize allocated memory with zero */
for (i = 0; i < total_size; i++)
{
*((char *)ptr + i) = 0;
}

return (ptr);
}


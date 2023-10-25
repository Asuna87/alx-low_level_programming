#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - Creates an array of integers from min to max
* @min: Minimum value (inclusive)
* @max: Maximum value (inclusive)
*
* Return: Pointer to the newly created array of integers
*         NULL if min > max or if malloc fails
*/
int *array_range(int min, int max)
{
int *array;
int size, i;

if (min > max)
return (NULL);

size = max - min + 1;
array = malloc(sizeof(int) * size);

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
array[i] = min + i;
}

return (array);
}


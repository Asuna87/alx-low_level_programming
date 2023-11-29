#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - Searches for an integer in an array and returns its index
* @array: The array to search
* @size: The size of the array
* @cmp: The comparison function to determine the match
*
* Return: The index of the first matching element, or -1 if no match is found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL)
{
for (int i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}


#include "main.h"
#include <stdlib.h>

/**
* _realloc - Reallocates a memory block using malloc and free
* @ptr: Pointer to the memory previously allocated with malloc(old_size)
* @old_size: Size, in bytes, of the allocated space for ptr
* @new_size: New size, in bytes, of the new memory block
*
* Return: Pointer to the reallocated memory block
*         NULL if new_size is 0 and ptr is not NULL
*         NULL if malloc fails
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i;

/* If new_size is 0, equivalent to free(ptr) */
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

/* If ptr is NULL, equivalent to malloc(new_size) */
if (ptr == NULL)
{
return (malloc(new_size));
}

/* Allocate new memory block with malloc */
new_ptr = malloc(new_size);

/* Check if malloc fails */
if (new_ptr == NULL)
{
return (NULL);
}

/* Copy contents from old memory block to new block */
if (new_size >= old_size)
{
for (i = 0; i < old_size; i++)
{
*((char *)new_ptr + i) = *((char *)ptr + i);
}
}
else
{
for (i = 0; i < new_size; i++)
{
*((char *)new_ptr + i) = *((char *)ptr + i);
}
}

/* Free the old memory block */
free(ptr);

return (new_ptr);
}


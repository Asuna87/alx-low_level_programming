#include "main.h"
#include <stdlib.h>

/**
* _realloc_copy - Copies the contents from the old memory
* block to the new block
* @src: Pointer to the source memory block
* @old_size: Size of the old memory block
* @n_s: Or New_Size : Size of the new memory block
* Return: Pointer to the new memory block
*/
static void *_realloc_copy(void *src, unsigned int old_size, unsigned int n_s)
{
void *new_ptr = malloc(n_s);
unsigned int i;
if (new_ptr != NULL)
{
unsigned int min_size = (old_size < n_s) ? old_size : n_s;
for (i = 0; i < min_size; i++)
{
*((char *)new_ptr + i) = *((char *)src + i);
}
free(src);
}
return (new_ptr);
}

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
if (ptr == NULL)
{
return (malloc(new_size));
}

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (new_size <= old_size)
{
return (ptr);
}

return (_realloc_copy(ptr, old_size, new_size));
}


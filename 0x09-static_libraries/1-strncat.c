#include "main.h"

/**
* _strncat - Concatenates two strings using at most n bytes from src.
* @dest: Destination string.
* @src: Source string.
* @n: Number of bytes from src to be concatenated.
* Return: Pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len, i;

dest_len = _strlen(dest);
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return (dest);
}


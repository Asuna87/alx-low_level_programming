#include "main.h"
#include <stddef.h>

/**
* _strpbrk - Searches a string for any of a set of bytes.
* @s: The string to be searched.
* @accept: The characters to be searched for.
* Return: Pointer to the first occurrence of any of the characters in accept
* in the string s, or NULL if no such character is found.
*/
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
return (s);
a++;
}
s++;
}
return (NULL);
}


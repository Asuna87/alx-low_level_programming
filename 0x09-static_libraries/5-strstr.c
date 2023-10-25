#include "main.h"
#include <stddef.h>

/**
* _strstr - Locates a substring within a string.
* @haystack: The string to be searched.
* @needle: The substring to be located.
* Return: Pointer to the beginning of the located substring in haystack,
* or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (NULL);
}


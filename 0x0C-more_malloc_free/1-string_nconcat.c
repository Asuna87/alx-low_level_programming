#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings up to n bytes of the second string
* @s1: First string
* @s2: Second string
* @n: Maximum number of bytes from s2 to concatenate
*
* Return: Pointer to a newly allocated space in memory containing the result
*         NULL if memory allocation fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, len1 = 0, len2 = 0;
char *concatenated;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;

while (s2[len2] != '\0')
len2++;

if (n >= len2)
n = len2;

concatenated = malloc(sizeof(char) * (len1 + n + 1));

if (concatenated == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

for (j = 0; j < n; j++)
concatenated[i + j] = s2[j];

concatenated[i + j] = '\0';

return (concatenated);
}


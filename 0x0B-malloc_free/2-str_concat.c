#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
*
* Return: pointer to a newly allocated space in
* memory containing the concatenated
*         string, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
char *concatenated;
unsigned int len1 = 0, len2 = 0, i, j;

/* Treat NULL strings as empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Calculate the lengths of the input strings */
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

/* Allocate memory for the concatenated string (+1 for null terminator) */
concatenated = malloc((len1 + len2 + 1) * sizeof(char));

/* Check if memory allocation was successful */
if (concatenated == NULL)
return (NULL);

/* Copy the first string to the concatenated string */
for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

/* Concatenate the second string to the concatenated string */
for (j = 0; j < len2; j++)
concatenated[i + j] = s2[j];

/* Add null terminator at the end of the concatenated string */
concatenated[i + j] = '\0';

return (concatenated);
}


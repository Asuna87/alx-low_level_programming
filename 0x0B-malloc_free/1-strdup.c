#include "main.h"
#include <stdlib.h>

/**
* _strdup - duplicates a string using malloc
* @str: input string to duplicate
*
* Return: pointer to the newly allocated duplicate
* string, or NULL if str is NULL
*/
char *_strdup(char *str)
{
char *duplicate;
unsigned int length = 0, i;

if (str == NULL)
return (NULL);

/* Calculate the length of the input string */
while (str[length] != '\0')
length++;

/* Allocate memory for the duplicate string */
duplicate = malloc((length + 1) * sizeof(char));

if (duplicate == NULL)
return (NULL);

/* Copy the input string to the newly allocated memory */
for (i = 0; i < length; i++)
duplicate[i] = str[i];

/* Add the null terminator at the end of the duplicate string */
duplicate[length] = '\0';

return (duplicate);
}


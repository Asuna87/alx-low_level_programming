#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - concatenates all arguments of the program
* @ac: argument count
* @av: argument vector (array of strings)
*
* Return: pointer to a new string containing concatenated arguments,
*         separated by newlines, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
if (ac <= 0 || av == NULL)
return (NULL);

int total_length = 0;
int i, j, index = 0;

/* Calculate the total length of all arguments */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
total_length++;
total_length++; /* for newline character after each argument */
}

/* Allocate memory for the concatenated string (+1 for null terminator) */
char *concatenated = malloc(total_length + 1);

if (concatenated == NULL)
return (NULL);

/* Copy the arguments to the concatenated string, separated by newlines */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
concatenated[index] = av[i][j];
index++;
}
concatenated[index] = '\n';
index++;
}

/* Add null terminator at the end of the concatenated string */
concatenated[index] = '\0';

return (concatenated);
}


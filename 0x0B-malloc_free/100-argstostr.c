#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - Concatenates all arguments of a program.
* @ac: Number of arguments.
* @av: Array of arguments.
*
* Return: A pointer to a new string, or NULL if it fails.
*/

char *argstostr(int ac, char **av)
{
int total_length;
int i, j;
char *concatenated;
int index;

total_length = 0;
if (ac <= 0 || av == NULL)
return (NULL);


for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
total_length++;
total_length++; /* for newline character after each argument */
}


concatenated = malloc(total_length + 1);
if (concatenated == NULL)
return (NULL);

index = 0;
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

concatenated[index] = '\0';

return (concatenated);
}


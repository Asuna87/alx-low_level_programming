#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
if (ac <= 0 || av == NULL)
return (NULL);

int total_length = 0;
int i, j;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
total_length++;
total_length++; /* for newline character after each argument */
}

char *concatenated;
concatenated = malloc(total_length + 1);
if (concatenated == NULL)
return (NULL);

int index = 0;
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


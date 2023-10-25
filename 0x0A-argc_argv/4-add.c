#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point, adds positive numbers
* @argc: Number of command line arguments
* @argv: Array containing the command line arguments
* Return: 0 if successful, 1 if invalid input
*/
int main(int argc, char *argv[])
{
int i, sum = 0;

for (i = 1; i < argc; i++)
{
int j = 0;

while (argv[i][j] != '\0')
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}


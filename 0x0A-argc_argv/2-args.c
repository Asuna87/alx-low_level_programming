#include <stdio.h>

/**
* main - Entry point, prints all arguments passed
* @argc: Number of command line arguments
* @argv: Array containing the command line arguments
* Return: Always 0
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}


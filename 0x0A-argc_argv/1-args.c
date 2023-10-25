#include <stdio.h>

/**
* main - Entry point, prints the number of arguments passed
* @argc: Number of command line arguments
* @argv: Array containing the command line arguments
* Return: Always 0
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}


#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main - Entry point for simple calculator program
* @argc: Number of arguments
* @argv: Array of argument strings
* Return: 0 on success, exit with status 98, 99, or 100 on failure
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

func = get_op_func(argv[2]);
result = func(num1, num2);
printf("%d\n", result);

return (0);
}


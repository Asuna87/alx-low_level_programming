#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _isdigit - Checks if a character is a digit (0-9)
* @c: Character to check
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(char c)
{
return (c >= '0' && c <= '9');
}

/**
* main - Multiplies two positive numbers
* @argc: Number of arguments
* @argv: Array of arguments
* Return: 0 on success, 98 on incorrect number of arguments or invalid input
*/
int main(int argc, char *argv[])
{
int i, j, result;
int *mul_result;
char *num1, *num2;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

num1 = argv[1];
num2 = argv[2];

for (i = 0; num1[i] != '\0'; i++)
{
if (!_isdigit(num1[i]))
{
printf("Error\n");
exit(98);
}
}

for (j = 0; num2[j] != '\0'; j++)
{
if (!_isdigit(num2[j]))
{
printf("Error\n");
exit(98);
}
}

mul_result = malloc(sizeof(int) * (i + j));
if (mul_result == NULL)
{
printf("Error\n");
exit(98);
}

for (i = 0; i < (i + j); i++)
mul_result[i] = 0;

for (i = 0; num1[i] != '\0'; i++)
{
for (j = 0; num2[j] != '\0'; j++)
{
mul_result[i + j] += (num1[i] - '0') * (num2[j] - '0');
mul_result[i + j + 1] += mul_result[i + j] / 10;
mul_result[i + j] %= 10;
}
}

while (mul_result[i + j - 1] == 0 && i + j > 1)
j--;

for (result = i + j - 1; result >= 0; result--)
_putchar(mul_result[result] + '0');

_putchar('\n');
free(mul_result);
return (0);
}


#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point, prints the minimum number of coins to make change
* for a given amount of money.
* @argc: Number of command line arguments
* @argv: Array containing the command line arguments
*
* Return: 0 if successful, 1 if incorrect number of arguments or negative input
*/
int main(int argc, char *argv[])
{
int coins = 0;
int cents;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

coins += cents / 25;
cents %= 25;
coins += cents / 10;
cents %= 10;
coins += cents / 5;
cents %= 5;
coins += cents / 2;
cents %= 2;
coins += cents;

printf("%d\n", coins);
return (0);
}


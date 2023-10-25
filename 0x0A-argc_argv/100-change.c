#include <stdio.h>
#include <stdlib.h>

int calculate_coins(int cents, int coin_value);

/**
* main - Entry point, prints the minimum number of coins to make change
* for a given amount of money.
* @argc: Number of command line arguments
* @argv: Array containing the command line arguments
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

coins += calculate_coins(cents, 25);
coins += calculate_coins(cents, 10);
coins += calculate_coins(cents, 5);
coins += calculate_coins(cents, 2);
coins += calculate_coins(cents, 1);

printf("%d\n", coins);
return (0);
}

/**
* calculate_coins - Helper function to calculate
* the number of coins of a given value
* @cents: Remaining cents to make change for
* @coin_value: Value of the coin (25, 10, 5, 2, or 1)
*
* Return: Number of coins of the given value that can be used
*/
int calculate_coins(int cents, int coin_value)
{
int coins = 0;

while (cents >= coin_value)
{
cents -= coin_value;
coins++;
}

return (coins);
}


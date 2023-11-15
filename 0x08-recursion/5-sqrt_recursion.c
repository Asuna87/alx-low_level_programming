#include "main.h"

/**
* find_sqrt - Helper function to find square root recursively.
* @n: The number to find the square root of.
* @guess: The current guess for the square root.
* Return: Square root of n, -1 if n does not have a natural square root.
* Description: This function uses recursion to
* find the natural square root of `n`.
*/
int find_sqrt(int n, int guess)
{
if (guess * guess > n)
return (-1); /* Error: n does not have a natural square root */

if (guess * guess == n)
return (guess);

return (find_sqrt(n, guess + 1));
/* Recur with the next guess for square root */
}

/**
* _sqrt_recursion - Calculates the natural square root of a number.
* @n: The number to find the square root of.
* Return: Square root of n, -1 if n does not have a natural square root.
* Description: This function computes the natural square root of the
* given non-negative integer `n` using recursion.
*/
int _sqrt_recursion(int n)
{
return (find_sqrt(n, 1));
/* Start finding square root with initial guess of 1 */
}


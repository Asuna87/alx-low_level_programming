#include "main.h"

/**
* factorial - Calculates the factorial of a number using recursion.
* @n: The input number.
* Return: Factorial of n, -1 if n is negative.
* Description: This function computes the factorial of the given
* non-negative integer `n` using recursion.
*/
int factorial(int n)
{
/* Base cases: factorial of 0 and 1 is 1 */
if (n < 0) {
return (-1); /* Error: factorial of negative number is undefined */
}
if (n == 0 || n == 1) {
return (1);
}
return (n * factorial(n - 1)); /* Recur with the previous number in the factorial sequence */
}


#include "main.h"

/**
* is_prime_helper - Helper function to check if a number is prime recursively.
* @n: The number to check for primality.
* @divisor: The current divisor to check against.
* Return: 1 if n is prime, 0 otherwise.
* Description: This function uses recursion to
* determine if `n` is a prime number.
*/
int is_prime_helper(int n, int divisor)
{
/*Base cases: if divisor exceeds half of n,*/
/* or n is divisible by divisor, return appropriate values*/

if (divisor > n / 2)
return (1); /* n is prime */

if (n % divisor == 0)
return (0); /* n is not prime */

return (is_prime_helper(n, divisor + 1)); /* Recur with the next divisor */
}

/**
* is_prime_number - Checks if a number is prime using recursion.
* @n: The number to check.
* Return: 1 if n is prime, 0 otherwise.
* Description: This function determines if the given integer `n` is prime
* by checking its divisibility using recursion.
*/
int is_prime_number(int n)
{
/* Base case: if n is 1 or less, it is not prime */
if (n <= 1)
return (0); /* n is not prime */

return (is_prime_helper(n, 2));
/* Start checking divisibility from divisor 2 */
}


#include "main.h"

/**
* _pow_recursion - Calculates the value of x raised to the power of y.
* @x: The base.
* @y: The exponent.
* Return: x raised to the power of y.
* Description: This function computes the result of `x` raised to the
* power of `y` using recursion.
*/
int _pow_recursion(int x, int y)
{
/* Base cases: x^0 is 1, x^1 is x */
if (y < 0)
return (-1); /* Error: power of negative exponent is undefined */

if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1)); /* Recur with the reduced exponent */
}


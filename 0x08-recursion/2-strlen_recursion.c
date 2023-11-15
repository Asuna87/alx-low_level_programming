#include "main.h"

/**
* _strlen_recursion - Calculates the length of a string using recursion.
* @s: The input string.
* Return: Length of the string.
* Description: This function computes the length of the string `s`
* by counting characters using recursion.
*/
int _strlen_recursion(char *s)
{
/* Base case: if the current character is null terminator, return 0 */

if (*s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
/* Recur with the next character in the string */
}


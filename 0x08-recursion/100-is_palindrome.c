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

/**
* is_palindrome - Checks if a string is a palindrome using recursion.
* @s: The input string.
* Return: 1 if s is a palindrome, 0 otherwise.
* Description: This function uses recursion to determine
* if the given string `s`
* is a palindrome (reads the same forwards and backwards).
*/
int is_palindrome(char *s)
{
int length = _strlen_recursion(s); /* Compute the length of the string */
return (check_palindrome(s, length));
/* Check if s is a palindrome using helper function */
}

/**
* check_palindrome - Helper function to check if a string is a palindrome.
* @s: The input string.
* @length: The length of the string.
* Return: 1 if s is a palindrome, 0 otherwise.
* Description: This function uses recursion to compare
* characters from the beginning
* and end of the string `s` to determine if it is a palindrome.
*/
int check_palindrome(char *s, int length)
{
if (length <= 1)
return (1); /* s is a palindrome */

if (*s != *(s + length - 1))
return (0); /* s is not a palindrome */

return (check_palindrome(s + 1, length - 2));
/* Recur with characters moved towards the center */
}


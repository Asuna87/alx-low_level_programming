#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The input string.
 * Description: This function prints the characters of the string `s`
 * in reverse
 * order using recursion.
 */
void _print_rev_recursion(char *s)
{
/* Base case: if the current character is null terminator, stop recursion */

if (*s == '\0')
return;

_print_rev_recursion(s + 1); /* Recur with the next character in the string */
putchar(*s); /* Print current character after the recursive call */
}


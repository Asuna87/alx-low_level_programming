#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string using recursion.
 * @s: The input string.
 * Description: This function prints each character of the string `s`
 * followed by a newline character using recursion.
 */
void _puts_recursion(char *s)
{
/* Base case: if the current character is null terminator, print newline */
if (*s == '\0') {
putchar('\n');
return;
}
putchar(*s); /* Print current character */
_puts_recursion(s + 1); /* Recur with the next character in the string */
}


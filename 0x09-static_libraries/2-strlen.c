#include "main.h"

/**
* _strlen - Computes the length of a string.
* @s: The string to be measured.
* Return: The length of the string.
*/
unsigned int _strlen(char *s)
{
unsigned int length = 0;

while (*s != '\0')
{
length++;
s++;
}
return (length);
}


#include "main.h"

/**
* wildcmp - Compares two strings with wildcard pattern using recursion.
* @s1: The first string.
* @s2: The second string with wildcard pattern (*).
* Return: 1 if the strings can be considered identical, otherwise 0.
* Description: This function uses recursion to compare strings allowing the
* use of wildcard character (*) that
* matches any string (including an empty string).
*/
int wildcmp(char *s1, char *s2)
{
/* Base case: if both strings are empty, they match */
if (*s1 == '\0' && *s2 == '\0')
return (1);

/* If s1 reaches end but s2 has '*', check if remaining s2 is all '*' */
if (*s1 == '\0' && *s2 == '*')
return (wildcmp(s1, s2 + 1));

/* If characters match or s2 has '*', move both pointers */
if (*s1 == *s2 || *s2 == '*')
return (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

return (0);
/* Characters don't match and s2 is not '*', strings do not match */
}


#ifndef MAIN_H
#define MAIN_H

/**
* _putchar - Writes a character to the standard output.
* @c: The character to be written.
* Return: 1 on success, -1 on error.
*/
int _putchar(char c);

/**
* _isupper - Checks if a character is uppercase.
* @c: The character to be checked.
* Return: 1 if the character is uppercase, 0 otherwise.
*/
int _isupper(int c);

/**
* _memset - Fills the first n bytes of the memory area with a constant byte.
* @s: Pointer to the memory area.
* @b: The constant byte to be filled.
* @n: Number of bytes to be filled.
* Return: Pointer to the memory area @s.
*/
char *_memset(char *s, char b, unsigned int n);

/**
* _strcat - Concatenates two strings.
* @dest: Destination string.
* @src: Source string.
* Return: Pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src);

/**
* _isdigit - Checks if a character is a digit (0 through 9).
* @c: The character to be checked.
* Return: 1 if c is a digit, 0 otherwise.
*/
int _isdigit(int c);

/**
* _memcpy - Copies n bytes from memory area src to memory area dest.
* @dest: Destination memory area.
* @src: Source memory area.
* @n: Number of bytes to be copied.
* Return: Pointer to the destination memory area @dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n);

/**
* _strchr - Locates the first occurrence of a character in a string.
* @s: The string to be searched.
* @c: The character to be located.
* Return: Pointer to the first occurrence of the character c in the string s,
* or NULL if the character is not found.
*/
char *_strchr(char *s, char c);

/**
* _strlen - Computes the length of a string.
* @s: The string to be measured.
* Return: The length of the string.
*/
unsigned int _strlen(char *s);

/**
* _strncpy - Copies a string up to n characters from the source to destination.
* @dest: Destination string.
* @src: Source string.
* @n: Number of characters to be copied.
* Return: Pointer to the resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n);

#endif /* MAIN_H */


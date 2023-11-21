#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
* is_delimiter - Checks if a character is a delimiter.
* @c: The character to check.
*
* Return: true if the character is a delimiter, otherwise false.
*/
static bool is_delimiter(char c)
{
return (c == ' ' || c == '\t' || c == '\n');
}

/**
* count_words - Counts the number of words in a string.
* @str: The input string.
*
* Return: The number of words.
*/
static int count_words(char *str)
{
int count = 0;
bool in_word = false;
int i;

for (i = 0; str[i]; i++)
{
if (!is_delimiter(str[i]))
{
if (!in_word)
{
in_word = true;
count++;
}
}
else
{
in_word = false;
}
}

return (count);
}

/**
* allocate_words - Allocates memory for an array of words.
* @str: The input string.
* @word_count: The number of words.
*
* Return: An array of words.
*/
static char **allocate_words(char *str, int word_count)
{
char **words;
int word_length;
int j;
int i = 0;

words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}

while (*str)
{
while (is_delimiter(*str))
str++;

word_length = 0;
while (!is_delimiter(str[word_length]) && str[word_length])
word_length++;


words[i] = malloc((word_length + 1) * sizeof(char));
if (words[i] == NULL)
{
for (j = 0; j < i; j++)
free(words[j]);

free(words);
return (NULL);
}

for (j = 0; j < word_length; j++)
words[i][j] = str[j];
words[i][word_length] = '\0';
i++;
str += word_length;
}
words[i] = NULL;
return (words);
}

/**
* strtow - Splits a string into an array of words.
* @str: The input string.
*
* Return: An array of words.
*/
char **strtow(char *str)
{
int word_count;
char **words;

if (str == NULL || *str == '\0')
return (NULL);


word_count = count_words(str);
if (word_count <= 0)
return (NULL);


words = allocate_words(str, word_count);
if (words == NULL)
return (NULL);


return (words);
}


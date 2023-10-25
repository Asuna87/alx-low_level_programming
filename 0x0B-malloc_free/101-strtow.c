#include "main.h"
#include <stdlib.h>
#include <stdbool.h>

/**
* count_words - Count the number of words in a string.
* @str: The input string.
*
* Return: Number of words in the string.
*/
static int count_words(char *str)
{
int count = 0;
bool in_word = false;
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
{
if (in_word)
{
in_word = false;
count++;
}
}
else
{
in_word = true;
}
}

if (in_word)
count++;

return (count);
}

/**
* allocate_words - Allocate memory for words in the string.
* @str: The input string.
* @word_count: Number of words in the string.
*
* Return: Pointer to the allocated array of words, or NULL on failure.
*/
static char **allocate_words(char *str, int word_count)
{
char **words;
int i, j;
int word_length;

words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

for (i = 0; i < word_count; i++)
{
while (*str == ' ')
str++;

word_length = 0;
while (*str && *str != ' ')
{
word_length++;
str++;
}

words[i] = malloc((word_length + 1) * sizeof(char));
if (words[i] == NULL)
{
for (j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}
}

words[i] = NULL;
return (words);
}

/**
* fill_words - Fill the allocated words with characters from the input string.
* @str: The input string.
* @words: The array of words to be filled.
*/
static void fill_words(char *str, char **words)
{
int i;
int word_length;

i = 0;
while (*str)
{
while (*str == ' ')
str++;

word_length = 0;
while (*str && *str != ' ')
{
words[i][word_length] = *str;
str++;
word_length++;
}

words[i][word_length] = '\0';
i++;
}
}

/**
* strtow - Split a string into words.
* @str: The input string.
*
* Return: Pointer to an array of words, or NULL on failure.
*/
char **strtow(char *str)
{
int word_count;
char **words;

if (str == NULL || *str == '\0')
return (NULL);

word_count = count_words(str);
if (word_count == 0)
return (NULL);

words = allocate_words(str, word_count);
if (words == NULL)
return (NULL);

fill_words(str, words);
return (words);
}


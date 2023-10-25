#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
* count_words - counts the number of words in a string
* @str: input string
*
* Return: number of words
*/
static int count_words(char *str)
{
int count = 0;
bool in_word = false;

while (*str)
{
if (*str == ' ')
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

str++;
}

if (in_word)
count++;

return (count);
}

/**
* allocate_words - allocates memory for words in a string
* @str: input string
* @word_count: number of words
*
* Return: pointer to allocated memory for words
*/
static char **allocate_words(char *str, int word_count)
{
char **words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

int i;
for (i = 0; i < word_count; i++)
{
while (*str == ' ')
str++;

int word_length = 0;
while (*str && *str != ' ')
{
word_length++;
str++;
}

words[i] = malloc((word_length + 1) * sizeof(char));
if (words[i] == NULL)
{
for (int j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}
}

words[i] = NULL;
return (words);
}

/**
* fill_words - fills words array with words from a string
* @str: input string
* @words: pointer to words array
*/
static void fill_words(char *str, char **words)
{
int i = 0;
while (*str)
{
while (*str == ' ')
str++;

int word_length = 0;
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
* strtow - splits a string into words
* @str: input string to split
*
* Return: pointer to an array of strings (words), or NULL on failure
*/
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return (NULL);

int word_count = count_words(str);
if (word_count == 0)
return (NULL);

char **words = allocate_words(str, word_count);
if (words == NULL)
return (NULL);

fill_words(str, words);
return (words);
}


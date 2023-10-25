#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

static char **allocate_words(char *str, int word_count)
{
char **words;
int i,j;
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

char **strtow(char *str)
{
int word_count;
char **words;

if (str == NULL || *str == '\0')
return (NULL);

word_count = count_words(str);
if (word_count == 0)
return (NULL);

**words = allocate_words(str, word_count);
if (words == NULL)
return (NULL);

fill_words(str, words);
return (words);
}

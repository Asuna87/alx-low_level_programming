#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

static bool is_delimiter(char c)
{
return (c == ' ' || c == '\t' || c == '\n');
}

static int count_words(char *str)
{
int count = 0;
bool in_word = false;

for (int i = 0; str[i] != '\0'; i++)
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

static char **allocate_words(char *str, int word_count)
{
char **words;
int word_length;
int i = 0;

words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

while (*str != '\0')
{
while (is_delimiter(*str))
str++;
word_length = 0;
while (!is_delimiter(str[word_length]) && str[word_length] != '\0')
word_length++;

words[i] = malloc((word_length + 1) * sizeof(char));
if (words[i] == NULL)
{
for (int j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}

for (int j = 0; j < word_length; j++)
words[i][j] = str[j];
words[i][word_length] = '\0';

i++;
str += word_length;
}

words[i] = NULL;
return (words);
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

words = allocate_words(str, word_count);
if (words == NULL)
return (NULL);

return (words);
}


#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
* _strdup - Duplicates a string in memory.
* @str: The string to be duplicated.
* Return: Pointer to the duplicated string, or NULL if memory allocation fails.
*/
char *_strdup(char *str)
{
char *dup;
unsigned int i, len = 0;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);

for (i = 0; i <= len; i++)
dup[i] = str[i];

return (dup);
}

/**
* new_dog - Creates a new dog structure with the provided information.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The owner of the dog.
* Return: Pointer to the newly created dog_t struct,
* or NULL if memory allocation fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
return (NULL);

new_dog->name = _strdup(name);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

new_dog->age = age;

new_dog->owner = _strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

return (new_dog);
}


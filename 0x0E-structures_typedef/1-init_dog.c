#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* init_dog - Initializes a dog structure with the provided information.
* @d: Pointer to the dog structure to be initialized.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The owner of the dog.
*/
void init_dog(dog_t *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}


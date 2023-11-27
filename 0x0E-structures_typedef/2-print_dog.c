#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_dog - Prints details about a dog.
* @d: Pointer to the dog structure to be printed.
*/
void print_dog(dog_t *d)
{
if (d == NULL)
return;

printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}


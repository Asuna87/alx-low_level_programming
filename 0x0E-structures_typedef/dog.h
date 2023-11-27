#ifndef DOG_H
#define DOG_H

/**
* struct dog - Defines a structure representing information about a dog.
* @name: The dog's name.
* @age: The dog's age.
* @owner: The dog's owner.
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

/* Function prototypes */
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */


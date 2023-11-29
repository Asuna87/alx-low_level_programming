#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - Prints a name using the provided function pointer
* @name: Name to print
* @f: Function pointer to a printing function
*
* Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}


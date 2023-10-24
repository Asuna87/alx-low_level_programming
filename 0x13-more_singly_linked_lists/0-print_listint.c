#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the integers in a listint_t list.
 * @h: Pointer to the first node of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
const listint_t *current = h;

while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
count++;
}

return (count);
}


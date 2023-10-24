#include "lists.h"

/**
 * listint_len - Counts the number of elements in a listint_t list.
 * @h: Pointer to the first node of the list.
 *
 * Return: Number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
size_t element_count = 0;
const listint_t *current = h;

while (current != NULL)
{
current = current->next;
element_count++;
}

return (element_count);
}


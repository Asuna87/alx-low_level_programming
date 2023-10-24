#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given position
 * in a listint_t list.
 * @head: Pointer to the pointer of the first node in the list
 * @index: Index of the node to be deleted (starting from 0)
 * Return: 1 if deleted successfully, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
current = *head;
*head = current->next;
free(current);
return (1);
}

current = *head;
while (current != NULL && i < index)
{
prev = current;
current = current->next;
i++;
}

if (current == NULL)
return (-1);

prev->next = current->next;
free(current);

return (1);
}


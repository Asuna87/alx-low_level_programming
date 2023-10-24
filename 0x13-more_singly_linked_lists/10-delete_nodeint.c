#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position
 * in a listint_t list.
 * 
 * @head: Pointer to the pointer of the first node in the list
 * @index: Index of the node to be deleted (starting from 0)
 * Return: 1 if deleted successfully, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
if (*head == NULL)
return (-1);

listint_t *current = *head;
listint_t *prev = NULL;
unsigned int i = 0;

while (current != NULL && i < index)
{
prev = current;
current = current->next;
i++;
}

if (current == NULL)
return (-1);

if (prev == NULL)
*head = current->next;
else
prev->next = current->next;

free(current);
return (1);
}


#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a list
 * @head: Pointer to a pointer to the first node of the list
 * @idx: Index at which the new node should be inserted
 * @n: Integer value to store in the new node
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int count = 0;
listint_t *new_node, *current = *head;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

while (current != NULL && count < idx - 1)
{
count++;
current = current->next;
}

if (current == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = current->next;
current->next = new_node;

return (new_node);
}


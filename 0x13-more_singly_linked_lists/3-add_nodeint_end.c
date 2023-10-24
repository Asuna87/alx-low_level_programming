#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t linked list.
 * @head: A pointer to the address of the first node.
 * @n: The integer value to be stored in the new node.
 *
 * Description: This function creates a new node with the given integer value
 * and adds it at the end of the linked list pointed to by `head`.
 *
 * Return: Address of the new node, or NULL if it failed to allocate memory.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
}
else
{
listint_t *temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
}

return (new);
}


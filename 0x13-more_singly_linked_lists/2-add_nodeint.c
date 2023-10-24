#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t linked list.
 * @head: A pointer to the address of the first node.
 * @n: The integer value to be stored in the new node.
 *
 * Description: This function creates a new node with the given integer value
 * and adds it at the beginning of the linked list pointed to by `head`.
 *
 * Return: Address of the new node, or NULL if it failed to allocate memory.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node_ptr = malloc(sizeof(listint_t));
if (new_node_ptr == NULL)
return (NULL);

new_node_ptr->n = n;
new_node_ptr->next = *head;

*head = new_node_ptr;

return (new_node_ptr);
}


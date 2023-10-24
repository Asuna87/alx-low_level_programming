#include "lists.h"

/**
 * pop_listint - Removes the head node of a linked list
 * @head: Pointer to a pointer to the first node of the list
 * Return: The integer value of the removed node
 */
int pop_listint(listint_t **head)
{
int value = 0;
listint_t *current;

if (head == NULL || *head == NULL)
return (0);

value = (*head)->n;
current = *head;
*head = (*head)->next;
free(current);

return (value);
}


#include "lists.h"

/**
 * pop_listint - Removes the head node of a linked list
 * @head: Pointer to a pointer to the first node of the list
 * Return: The integer value of the removed node
 */
int pop_listint(listint_t **head)
{
int value;
listint_t *temp;

if (head == NULL || *head == NULL)
return (0);

value = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);

return (value);
}


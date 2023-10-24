#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the pointer of the first node in the list
 * 
 * Description: This function reverses a singly linked list of integers.
 * 
 * Return: Pointer to the first node of the reversed list, or NULL on failure
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *current = *head, *next = NULL;

while (current != NULL)
{
next = current->next;
current->next = prev;
prev = current;
current = next
}

*head = prev;
return (*head);
}


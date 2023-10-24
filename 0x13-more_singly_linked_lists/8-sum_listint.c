#include "lists.h"

/**
 * sum_listint - Computes the sum of all the integers in a linked list
 * @head: Pointer to the first node of the list
 * Return: Sum of integers in the list
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}


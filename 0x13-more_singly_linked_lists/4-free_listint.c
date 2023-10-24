#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t linked list.
 * @head: A pointer to the first node of the list.
 *
 * Description: This function frees each node in the linked list
 * starting from the head node.
 */
void free_listint(listint_t *head)
{
listint_t *current;
while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}


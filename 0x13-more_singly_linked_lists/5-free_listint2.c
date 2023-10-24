#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t linked list and sets the head to NULL.
 * @head: A pointer to a pointer to the first node of the list.
 *
 * Description: This function frees each node in the linked list
 * starting from the head node and sets the head pointer to NULL.
 */
void free_listint2(listint_t **head)
{
listint_t *current;

while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}

}


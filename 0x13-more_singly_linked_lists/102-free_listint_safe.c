#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Pointer to the pointer of the first node in the list
 * Description: This function frees a singly linked list of integers safely.
 * Return: Number of nodes in the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *next;
size_t count = 0;

if (h == NULL || *h == NULL)
return 0;

current = *h;

while (current != NULL)
{
count++;
next = current->next;
free(current);
current = next;

if (current == *h)
{
*h = NULL;
break;
}
}

return (count);
}


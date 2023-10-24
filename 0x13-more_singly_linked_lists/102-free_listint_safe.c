#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a linked list with a loop, ensuring safe removal.
 * @h: Pointer to the first node in the linked list.
 *
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int res;
listint_t *temp;

if (!h || !*h)
return (0);

while (*h)
{
res = *h - (*h)->next;
if (res > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
len++;
}
else
{
free(*h);
*h = NULL;
len++;
break;
}
}

*h = NULL;

return (len);
}
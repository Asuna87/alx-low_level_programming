#include "lists.h"

/**
 * print_listint_safe - Prints a linked list, even if it has a loop.
 * @head: A pointer to the head of the linked list.
 * Return: The number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
unsigned int count = 0;
listint_t *current = head;
listint_t *previous = NULL;

while (current != NULL) {
if (current == previous) {
printf("-> [%p] %d\n", (void *)current, current->n);
return (count);
}

previous = current;
current = current->next;
count++;
}

printf("\n");
return (count);
}

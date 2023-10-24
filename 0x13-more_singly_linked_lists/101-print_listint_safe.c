#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
* looped_listint_len - Calculates the count of distinct nodes
* in a looped listint_t linked list.
* @head: A pointer to the head of the listint_t to examine.
* Return: If the list is not looped - 0.
* Otherwise - the count of unique nodes in the list.
*/
size_t looped_listint_len(const listint_t *head)
{
const listint_t *slow, *fast;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

slow = head->next;
fast = (head->next)->next;

while (fast)
{
if (slow == fast)
{
slow = head;
while (slow != fast)
{
nodes++;
slow = slow->next;
fast = fast->next;
}

slow = slow->next;
while (slow != fast)
{
nodes++;
slow = slow->next;
}

return (nodes);
}

slow = slow->next;
fast = (fast->next)->next;
}

return (0);
}

/**
* print_listint_safe - Safely prints a listint_t list.
* @head: A pointer to the head of the listint_t list.
* This function safely prints a listint_t linked list, handling cases where the list contains a loop.
* If the list is not looped, it prints the entire list. If the list is looped, it prints the list up to
* the beginning of the loop, then separately prints the node where the loop starts.
* Return: The count of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;

nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodes);
}

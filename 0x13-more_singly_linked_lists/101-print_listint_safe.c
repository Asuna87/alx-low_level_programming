#include "lists.h"
#include <stdio.h>

/**
 * find_loop - Finds the node where the loop in a linked list starts.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The address of the node where the loop starts, or NULL if there's no loop.
 */
listint_t *find_loop(const listint_t *head)
{
    const listint_t *slow, *fast;

    if (head == NULL || head->next == NULL)
        return NULL;

    slow = head->next;
    fast = head->next->next;

    while (fast && fast->next)
    {
        if (slow == fast)
        {
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return (listint_t *)slow;
        }

        slow = slow->next;
        fast = fast->next->next;
    }

    return NULL;
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t nodes = 0;
    listint_t *loop_start = find_loop(head);

    while (head != loop_start)
    {
        printf("[%p] %d\n", (void *)head, head->n);
        nodes++;
        head = head->next;
    }

    if (loop_start)
        printf("-> [%p] %d\n", (void *)head, head->n);

    return nodes;
}


#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - Counts the num of unique nodes
 * in a looped listint_t linked list
 * @head: A pointer to the head of the listint_t
 * Return: If the list is not looped - 0
 * Otherwise - the number of unique nodes in the listr
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *slow, *fast;
size_t ndes = 1;
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
ndes++;
slow = fast->next;
fast = fast->next;
}
slow = slow->next;
while (slow != fast)
{
ndes++;
slow = slow->next;
}
return (ndes);
}
slow = slow->next;
fast = (fast->next)->next;
}
return (0);
}
/**
 * print_listint_safe - Prints a listint_t list safely
 * @head: A pointer to the head of the listint_t list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t ndes, idx = 0;
ndes = looped_listint_len(head);
if (ndes == 0)
{
for (; head != NULL; ndes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (idx = 0; idx < ndes; idx++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
printf("-> [%p] %d\n", (void *)head, head->n);
return (ndes);
}

#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int j;
listint_t *newnde;
listint_t *temp = *head;
newnde = malloc(sizeof(listint_t));
if (!newnde || !head)
return (NULL);
newnde->n = n;
newnde->next = NULL;
if (idx == 0)
{
newnde->next = *head;
*head = newnde;
return (newnde);
}
for (j = 0; temp && j < idx; j++)
{
if (j == idx - 1)
{
newnde->next = temp->next;
temp->next = newnde;
return (newnde);
}
else
temp = temp->next;
}
return (NULL);
}

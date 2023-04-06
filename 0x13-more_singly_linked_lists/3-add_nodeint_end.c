#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: beginning of the list
 * @n: data to insert in the new element
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newele;
	listint_t *temp = *head;

	newele = malloc(sizeof(listint_t));
	if (!newele)
	return (NULL);
	newele->n = n;
	newele->next = NULL;
	if (*head == NULL)
	{
		*head = newele;
		return (newele);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = newele;
	return (newele);
}

#include "lists.h"
/**
 * add_nodeint - function that adds node to beginning
 * @n: variable to the linked list
 * @head: address of the new node
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newele;

	newele = malloc(sizeof(listint_t));
	if (!newele)
		return (NULL);
	newele->n = n;
	newele->next = *head;
	*head = newele;
	return (newele);
}

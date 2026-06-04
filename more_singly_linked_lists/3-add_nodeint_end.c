#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head:  pointer to the first node
 * @n: integer to store in the new node
 * Return: address to the new element, NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *current;

	current = *head;

	while (current && current->next != NULL)
		current = current->next;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (current)
		current->next = newnode;
	else
		*head = newnode;
	return (newnode);
}

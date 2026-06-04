#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: address of pointer to the first node
 *
 *Return:  0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *main_head;
	int n;

	main_head = *head;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	(*head) = (*head)->next;
	free(main_head);

	return (n);
}

#include "lists.h"

/**
 * pop_listint - deletes first node
 * @head: points to start of list
 * Return: return deleted data else 0 if list empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}

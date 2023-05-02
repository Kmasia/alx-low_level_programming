#include "lists.h"

/**
 * delete_nodeint_at_index - locates and deletes node by index
 * @head: first node
 * @index: node to delete
 * Return: 1 after deletion else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *curr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}

	curr = tmp->next;
	tmp->next = curr->next;
	free(curr);

	return (1);
}

#include "lists.h"

/**
 * get_nodeint_at_index - searches for specific node in list
 * @head: first nod
 * @index: index search element
 * Return: search results else null if node not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *tmp = head;

	while (tmp && n < index)
	{
		tmp = tmp->next;
		n++;
	}
	return (tmp ? tmp : NULL);
}

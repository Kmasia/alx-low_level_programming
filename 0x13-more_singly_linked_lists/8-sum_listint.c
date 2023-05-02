#include "lists.h"

/**
 * sum_listint - calculates the sum of contained data
 * @head: first node
 * Return: value of sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}

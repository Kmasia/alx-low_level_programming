#include "lists.h"

/**
 * listint_len - counts the number of elements and returns value of count
 * @h: parameter for list traversal
 * Return: number of node in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}


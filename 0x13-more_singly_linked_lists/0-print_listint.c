#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @h: parameter of type listint_t
 * Return: count
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
{
	printf("%d\n", h->n);
	count++;
	h = h->next;
}

	return (count);
}



#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the vakue of list length
 * @h: pointer to first node of list
 * Return: list length
 */

size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}


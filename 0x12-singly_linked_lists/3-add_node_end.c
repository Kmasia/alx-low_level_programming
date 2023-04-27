#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new tail node
 * @head: double pointer to head of list
 * @str: new node string
 * Return: address  or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_N;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	new_N = malloc(sizeof(list_t));
	if (!new_N)
		return (NULL);

	new_N->str = strdup(str);
	new_N->len = len;
	new_N->next = NULL;

	if (*head == NULL)
	{
		*head = new_N;
		return (new_N);
 	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_N;
	return (new_N);
}


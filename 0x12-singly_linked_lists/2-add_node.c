#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node at head of list
 * @head: double pointer to start of list
 * @str: new element
 * Return: address or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_Node;
	unsigned int length = 0;

	while (str[length])
	length++;

	n_Node = malloc(sizeof(list_t));

	if (!n_Node)
		return (NULL);

	n_Node->str = strdup(str);
	n_Node->len = length;
	n_Node->next = (*head);
	(*head) = n_Node;

	return (*head);
}


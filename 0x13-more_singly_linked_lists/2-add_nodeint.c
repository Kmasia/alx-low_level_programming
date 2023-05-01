#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: start of list
 * @n: new node
 * Return: new node for succes else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_Node;

	n_Node = malloc(sizeof(listint_t));
	if (!n_Node)
		return (NULL);

	n_Node->n = n;
	n_Node->next = *head;
	*head = n_Node;

	return (n_Node);
}


#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pinter to head of list
 * @n: new element
 * Return: new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_Node;
	listint_t *tmp = *head;

	n_Node = malloc(sizeof(listint_t));
	if (!n_Node)
		return (NULL);

	n_Node->n = n;
	n_Node->next = NULL;

	if (*head == NULL)
	{
		*head = n_Node;
		return (n_Node);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = n_Node;

	return (n_Node);
}


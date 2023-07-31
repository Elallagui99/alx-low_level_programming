#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint -  adds a new node at the beginning of a list
 * @head: poiter to pointer to head of list
 * @n: value of added integer
 * Return: added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}

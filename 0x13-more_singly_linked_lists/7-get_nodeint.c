#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head of the list
 * @index: index of the wanted node
 * Return: the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}

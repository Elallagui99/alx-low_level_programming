#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: head of the list
 * @index: position to delet from
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *tmp;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		del = *head;
		*head = (*head)->next;
		free(del);
		return (1);
	}
	tmp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (tmp == NULL)
			return (-1);
		 tmp = tmp->next;
	}
	del = tmp->next;
	tmp->next = del->next;
	free(del);
	return (1);
}

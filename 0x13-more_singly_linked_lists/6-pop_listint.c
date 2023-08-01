#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a list
 * @head: head of the list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL)
		return (0);
	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}

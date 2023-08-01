#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: head of the list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}

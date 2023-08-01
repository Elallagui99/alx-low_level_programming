#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list
 * @head: head of the list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

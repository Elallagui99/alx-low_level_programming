#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list
 * @head: head of the list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}

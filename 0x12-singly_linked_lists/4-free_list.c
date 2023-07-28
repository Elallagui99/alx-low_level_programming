#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free a list
 * @head: pointer to the head
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}

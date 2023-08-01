#include "lists.h"
#include <stdio.h>

/**
 * prit_listint - prints all the elements of a listint_t list
 * @h: pointer to the header of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
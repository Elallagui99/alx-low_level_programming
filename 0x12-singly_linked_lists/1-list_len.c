#include "lists.h"

/**
 * list_len - count number of elements in a list
 * @h: pointer to head
 * Return: number of elemets
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

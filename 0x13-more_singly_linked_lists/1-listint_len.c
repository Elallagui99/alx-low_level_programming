#include "lists.h"

/**
 * listint_len - count the number of elements in a linked list.
 * @h: pointer to the head of the list
 * Return: the number
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

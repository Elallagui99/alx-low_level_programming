#include "lists.h"

/**
 * sum_listint -  sum of all the data (n) of a listint_t
 * @head: head of the list
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

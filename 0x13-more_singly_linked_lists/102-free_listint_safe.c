#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_loop_len - floysd's cycle to finf loop
 * @head: pointer to head
 *
 * Return: the number of nodes in loop, 0 othewisw
 */

size_t find_loop_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t len = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = head->next->next;

	while (fast != NULL)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				len++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				len++;
				slow = slow->next;
			}
			return (len);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}

/**
 * free_listint_safe - free looped list
 * @h: pointer to head
 * Return: number o node freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr;
	size_t num = 0, i = 0;

	num = find_loop_len(*h);

	if (num == 0)
	{
		while (*h != NULL)
		{
			ptr = *h;
			*h = (*h)->next;
			free(ptr);
			i++;
		}
	}
	else
	{
		while (num)
		{
			ptr = *h;
			*h = (*h)->next;
			free(ptr);
			num--;
			i++;
		}
		*h = NULL;
	}
	return (num);
}

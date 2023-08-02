#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * found_loop - find loop in list
 * @head: pointer to head
 * Return: number of nodes in loop
 */
size_t found_loop(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = fast;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}
			return (nodes);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - print list
 * @head: pointer to head
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num, i;

	num = found_loop(head);

	if (!num)
	{
		for (; head != NULL; num++, head = head->next)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < num; i++)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *) head, head->n);
	}
	return (num);
}

#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - find loop in listed link
 * @head: pointer to head of list
 * Return: iindex of the start of loop, NUll otherwise
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	slow = head->next;
	fast = head->next->next;
	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (NULL);
}

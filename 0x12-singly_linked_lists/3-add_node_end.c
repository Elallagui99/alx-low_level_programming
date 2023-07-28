#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - count the length of a character
 * @s: the character to be counted
 * Return: the length integer
 */
int _strlen(const char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - add element to the end of the list
 * @head: pointer to pointer to head of list
 * @str: string to fill with the new node
 * Return: the new elemets
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tail;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		tail = *head;
		while (tail->next)
			tail = tail->next;
		tail->next = new;
	}
	return (new);
}

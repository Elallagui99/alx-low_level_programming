#include "lists.h"
#include <stdlib.h>
#include <string.h>

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
 * add_node - add a new elemets to the list
 * @head: head of the list
 * @str: string to fill the new elements
 * Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

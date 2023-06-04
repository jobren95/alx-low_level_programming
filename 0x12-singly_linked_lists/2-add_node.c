#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node - Function that adds a new node at the beginning of a list_t list.
 *@head: Two pointer to list_t list
 *@str: Add new string to the node
 *Return: Address of new friend or null if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str =  strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

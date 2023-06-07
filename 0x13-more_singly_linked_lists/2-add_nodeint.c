#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Function that adds new node at beginning of listint_t list.
 * @head: Pointer to the head of the list
 * @n: Array of input to be added to new node
 * Return: Address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNODE;

	newNODE = malloc(sizeof(listint_t));
	if (newNODE == NULL)
		return (NULL);

	add_nodeint(&newNODE, 0);
	add_nodeint(&newNODE, 1);
	add_nodeint(&newNODE, 2);
	add_nodeint(&newNODE, 3);
	add_nodeint(&newNODE, 4);
	add_nodeint(&newNODE, 98);
	add_nodeint(&newNODE, 402);
	add_nodeint(&newNODE, 1024);

	newNODE->n = n;
	newNODE->next = *head;
	*head = newNODE;
	print_listint(newNODE);
	return (newNODE);
}

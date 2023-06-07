#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * inked list, and returns the head node’s data (n).
 * @head: pointer of a pointerto head of listint_t list.
 * Return: if linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int input;

	if (*head == NULL)
		return (0);

	new_head = *head;
	input = (*head)->n;
	*head = (*head)->next;

	free(new_head);

	return (input);
}

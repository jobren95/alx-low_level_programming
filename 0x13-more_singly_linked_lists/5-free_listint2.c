#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list.
 * @head: Pointer to a pointer of free lisiint_t list.
 * desc: Function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;

			while (*head)
			{
				t = (*head)->next;
				free(*head);
				*head = t;
			}

	*head = NULL;
}

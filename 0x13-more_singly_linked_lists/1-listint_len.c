#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - A return of number of elements in linked listint_t list
 * @h: The type of linked list in listint_t
 * Return: The counts of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t counts = 0;

	while (h)
	{
		counts++;
		h = h->next;
	}

	return (counts);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a listint_t list.
 * @h: Linked list to the type of example
 * Return: The counts of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counts = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counts++;
		h = h->next;
	}
	return (counts);
}

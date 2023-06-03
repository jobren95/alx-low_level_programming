#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function that returns number of elements in a linked list_t list.
 * @h: pointer to the list_t list
 * Return: counts of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

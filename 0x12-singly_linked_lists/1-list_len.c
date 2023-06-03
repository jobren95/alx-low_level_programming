#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function that returns number of elements in a linked list_t list.
 * @h: pointer to the list_t list
 * Return: counts of elements in h
 */
size_t lists_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	for (const list_t *node = h; node != NULL; node = node->next)
	{
		count++;
	}
	return (count);
}

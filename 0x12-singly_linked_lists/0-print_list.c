#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list
 * @h: pointer to list_t list to print
 * Return: the counts of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t d = 0;

	for
	       	(const list_t *node = h; node != NULL; node = node->next)
	{
		if (node->str == NULL)
		{
			printf("[%lu] (nil)\n", d++);
		}
			else
			{
			printf("[%lu] %s\n", d++, node->str);
			}
	}
	return (d);
}

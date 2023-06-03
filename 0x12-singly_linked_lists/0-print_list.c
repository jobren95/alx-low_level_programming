#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list
 * @h: pointer to list_t list to print
 * Return: the counts of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t node_num = 1;

	if (h == NULL)
		return 0;

	while (h->next != NULL)
	{
		if (h->str ==NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node_num++;
	}
	printf("[%d] %s\n", h->len, h->str);
	return node_num;
}

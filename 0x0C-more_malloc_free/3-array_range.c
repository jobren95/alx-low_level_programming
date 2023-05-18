#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min: minimum range of input stored
 * @max: maximum range of input stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *mem;
	int h, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	mem = malloc(sizeof(int) * size);

	if (mem == NULL)
		return (NULL);

	for (h = 0; min <= max; h++)
		mem[h] = min++;

	return (mem);
}


#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: counts of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}


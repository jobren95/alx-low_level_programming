#include <stdlib.h>
#include "main.h"

/**
 * *_memset - function that allocates memory for an array, using malloc
 * @s: pointer area to be filled
 * @b: char to copy
 * @n: counts of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: counts of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	_memset(mem, 0, nmemb * size);

	return (mem);
}



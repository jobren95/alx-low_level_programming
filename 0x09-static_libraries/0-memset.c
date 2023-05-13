#include "main.h"

/**
 * _memset - Fill block of memory with a specific value
 * @s: Begin address of memory to be filled
 * @b: The desired value
 * @n: Number of bytes to be changed
 *
 * Return: Change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;

		n--;
	}
	return (s);
}


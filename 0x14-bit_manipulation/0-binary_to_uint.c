#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Function that converts binary number to an unsigned int.
 * @b: An array of numbers 0 and 1
 *
 * Return: The converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;
	int a;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[a] - '0');
	}

	return (dec_val);

}

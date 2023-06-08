#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function that sets value of bit to 0 at given index
 * @n:  A pointer to the changed counts
 * @index: starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

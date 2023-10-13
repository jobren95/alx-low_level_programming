#include "main.h"
#include <stdio.h>

/**
 * get_bit - Function that returns value of a bit at a given index.
 * @n: Search number
 * @index: Bit at index
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	if (index > 63)
		return (-1);

	bitValue = (n >> index) & 1;

	return (bitValue);
}

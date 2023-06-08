#include <stdio.h>
#include "main.h"

/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: counts to lookout
 * @index: is the index, starting from 0
 *
 * Return: is the index, starting from 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitval;

	if (index > 63)
		return (-1);


	bitval = (n >> index) & 1;

	return (bitval);
}

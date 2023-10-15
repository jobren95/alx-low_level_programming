#include <stdio.h>
#include "main.h"

/**
 * set_bit - Function that sets value of a bit to 1 at given index
 * @n: Pointing to the counts to relpace
 * @index: Index of the bit want to set to 1
 * Return; 1 if it success or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 )

		return (-1);


			*n = ((1Ul << index) | *n);


	return (1);
}

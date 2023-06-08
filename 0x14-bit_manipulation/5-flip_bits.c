#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: num 1
 * @m: num 2
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, num = 0;
	unsigned long int new;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		new = exclusive >> a;
		if (new & 1)
			num++;
	}

	return (num);
}

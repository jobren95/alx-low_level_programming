#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary
 * @n: counts to print in binary
 *
 */
void print_binary(unsigned long int n)
{
	int a, num = 0;
	unsigned long int new;

	for (a = 63; a >= 0; a--)
	{
		new = n >> a;

		if (new & 1)
		{
			_putchar('1');
			num++;

		}
		else if (num)
			_putchar('0');
	}
	_putchar('0');
}

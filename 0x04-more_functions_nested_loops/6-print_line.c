#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: No of times
 * Return: Always 0
 */
void print_line(int n);
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

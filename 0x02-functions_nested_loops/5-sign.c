#include "main.h"
/**
 * main - A program that prints the sign of a number
 * Return: 1 is > 0, 0 is zero
 * -1 is < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

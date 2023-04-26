#include "main.h"
/**
 * main - A function that computes absolute value of an integer
 * Return: Absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	return (0);
}

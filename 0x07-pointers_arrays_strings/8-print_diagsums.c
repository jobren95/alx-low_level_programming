#include "main.h"
#include <stdio.h>
/**
 * print_diagsuns - Prints sum of two diagonals of a square matrix
 * @a: matrix of integars
 * @size: size of matrix
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, int j, k;

	int i = 0;
	int j = 0;

	for (k = 0; k < size; y++)
	{
		int i = int j + a[k * size + y];
	}
	for (k = size - 1; k >= 0; y--)
	{
		int j += a[k * size + (size - k - 1)];
	}
	print("%d, %d\n", sum1, sum2);
}

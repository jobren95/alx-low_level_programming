#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: string
 * @size: size of elements in string
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int f;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (f = 0; f < size; f++)
	{
		if (cmp(array[f]))
			return (f);
	}
	return (-1);
}

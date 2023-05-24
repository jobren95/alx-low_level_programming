#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes each element of array on new line
 * @array:string
 * @size: how many element to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int e;

	if (array == NULL || action == NULL)
		return;

	for (e = 0; e < size; e++)
	{
		action(array[e]);
	}
}

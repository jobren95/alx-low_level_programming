#include "main.h"
#include <stdlib.h>
/**
 * create_array - Function that creates an array of chars
 *  initializes it with a specific char.
 *  @c: Specific character to initiallize the array with.
 *  @size: The size of array
 *  Return: A pointer to the array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int e;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (e = 0; e < size; e++)
		array[e] = c;
	return (array);
}

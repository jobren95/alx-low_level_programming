#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  A function that duplicate string to a new memory space
 * @str: Char
 * Return: NULL, if str = NULL
 */
char *_strdup(char *str)
{
	char *yyy;

	int i f = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	yyy = malloc(sizeof(char) * (i + 1));

	if (yyy == NULL)
		return (NULL);

	for (f = 0; str[f]; f++)
		yyy[f] = str[f];

	return (yyy);
}


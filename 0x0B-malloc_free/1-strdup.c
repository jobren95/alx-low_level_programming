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
	int i len = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	yyy = malloc(sizeof(cg
				har) * (i + 1))

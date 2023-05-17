#include "main.h"
#include <stdlib.h>

/**
 * Str_concat - Get ends of values and add together for size
 * @s1: enter value one to concat
 * @s2: enter value two to concat
 * Return: Concat of @s1 and @s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int g, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	g = ci = 0;
	while (s1[g] != '\0')
		g++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (g + ci + 1));

	if (conct == NULL)
		return (NULL);
	g = ci = 0;
	while (s1[g] != '\0')
	{
		conct[g] = s1[g];
		g++;
	}

	while (s2[ci] != '\0')
	{
		conct[g] = s2[ci];
		g++, ci++;
	}
	conct[g] = '\0';

	return (conct);

}

#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments
 * @ac: int values
 * @av: double pointer string
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int e, f, j = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (e = 0; e < ac; e++)
	{
		for (f = 0; av[e][f]; f++)
				l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (e = 0; e < ac; e++)
	{
	for (f = 0; av[e][f]; f++)
	{
		str[j] = av[e][f];
		j++;
	}
	if (str[j] == '\0')
	{
		str[j++] = '\n';
	}
	}
	return (str);
}




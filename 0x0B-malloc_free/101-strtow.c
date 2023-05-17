#include <stdlib.h>
#include "main.h"

/**
 * count_word - Functions that help count number of words in a string
 * @s: Evaluate strings
 * Return: Counts of words
 */
int count_word(char *s)
{
	int flag, t, u;

	flag = 0;
	u = 0;

	for (t = 0; s[t] != '\0'; t++)
	{
		if (s[t] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			u++;
		}
	}

	return (u);
}
/**
 * strtow - splits string into words
 * @str: string to split
 * Return: array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int d, e = 0, len = 0, words, c = 0, begin, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (d = 0; d <= len; d++)
	{
		if (str[d] == ' ' || str[d] == '\0')
		{
			if (c)
			{
				end = d;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (begin < end)
					*tmp++ = str[begin++];
				*tmp = '\0';
				matrix[e] = tmp - c;
				e++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = d;
	}

	matrix[e] = NULL;
	return (matrix);
}

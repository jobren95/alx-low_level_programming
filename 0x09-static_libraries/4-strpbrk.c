#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 * @s: entered value
 * @accept: entered value
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{

		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}

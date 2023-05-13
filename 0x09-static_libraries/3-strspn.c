#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int u;

	while (*s)
	{

		for (u = 0; accept[u]; u++)
		{
			if (*s == accept[u])
			{
				n++;
				break;
			}
			else if (accept[u + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

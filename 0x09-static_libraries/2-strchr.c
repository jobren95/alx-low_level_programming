#include "main.h"

/**
 * _strchr - Function that gets the length of a prefix substring.
 * @s: entered value
 * @c: entered value
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

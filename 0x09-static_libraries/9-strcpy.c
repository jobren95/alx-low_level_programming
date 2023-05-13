#include "main.h"

/**
 * char *_strcpy - Function that copies the string pointed to by src
 * @dest: copy value to
 * @src: copy value from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int b = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; b < l ; b++)
	{
		dest[b] = src[b];
	}
	dest[l] = '\0';
	return (dest);
}


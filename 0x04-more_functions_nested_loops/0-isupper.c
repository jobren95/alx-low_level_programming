#include "main.h"

/**
 * _isupper - Checks for uppercase letter.
 * @c:The uppercase character
 * Return: 1 for uppercase or 0 for otherswise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

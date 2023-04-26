#inclde "main.h"
/**
 * main - A function that checks alphabetic character
 * Return: 1 for letters. 0 for the others.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c >= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}

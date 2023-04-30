#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return : void
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
			ch++;
		}
		ch = 'a';
		_putchar('\n');
	}
	return (0);
}

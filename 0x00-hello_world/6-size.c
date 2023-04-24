#include <stdio.h>
/**
 * main -A programe that prints the size of various computer types
 * Return: Always 0
 **/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu bite(s)", (unsigned long)  sizeof(a));
	printf("size of an int: %lu bite(s)", (unsigned long)  sizeof(b));
	printf("size of a long int: %lu bite(s)", (unsigned long)  sizeof(c));
	printf("size of a long long int: %lu bite(s)", (unsigned long)  sizeof(d));
	printf("size of a float: %lu bite(s)", (unsigned long)  sizeof(f));
	return (0);
}

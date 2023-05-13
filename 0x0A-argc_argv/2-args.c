#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints all arguments it receives
 * @argc: Counts of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}

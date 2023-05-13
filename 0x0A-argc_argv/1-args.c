#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints number of arguments passed into it
 * @argc: Counts of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (sucess)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

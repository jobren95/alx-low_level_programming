#include <stdio.h>
#include "main.h"

 /**
  * main - A program that prints its name
  * @argc: counts of arguments
  * @argv: array of pointers to arguments
  * Return: Always 0 (Success)
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

#include <stdio.h>
#include "main.h"

 /**
  * main - A program to prints its name,then a new line
  * @argc: counts of arguments
  * @argv: array of pointers to arguments
  * Return: Always 0 (Success)
  */
int main(int __attribute__((unused))argc, char *argv[])
{
	printf("%s\n", *argv[]);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - String there are digit
 * @str: array string
 * Return: Always 0 (success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int number;

	number = 0;
	while (number < strlen(str)) /*number string*/

	{
		if (!isdigit(str[number])) /*check if str there are digit*/
		{
			return (0);
		}
		number++;
	}
	return (1);
}

/**
 * main - Print program name
 * @argc: Number arguments
 * @argv: Arguements
 *
 * Return: Always ) (success)
 */

int main(int argc, char *argv[])
{

	/*Check variables*/
	int number;
	int str_to_int;
	int sum = 0;

	number = 1;
	while (number < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[number]))

		{
			str_to_int = atoi(argv[number]);/*ATOI -> convert string to int*/
			sum += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		number++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}

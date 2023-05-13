#include <stdio.h>
#include "main.h"

/**
 * _atoi - Change a string to an integer
 * @s: String to be changed
 *
 * Return: The int changed from string
 */
int _atoi(char *s)
{
	int t, u, v, len, w, digit;

	t = 0;
	u = 0;
	v = 0;
	len = 0;
	w = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (t < len && w == 0)
	{
		if (s[t] == '-')
			++u;

		if (s[t] >= '0' && s[t] <= '9')
		{
			digit = s[t] - '0';
			if (u % 2)
				digit = -digit;
			v = v * 10 + digit;
			w = 1;
			if (s[t + 1] < '0' || s[t + 1] > '9')
				break;
			w = 0;
		}
		t++;
	}

	if (w == 0)
		return (0);

	return (v);
}

/**
 * main - program that multiplies two numbers
 * @argc: counts of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success), 1 (Error
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: The array to be printed between arrays.
 * @n: The counts of arrays passed to the function.
 * @...: A variable counts of arrays to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the arrays if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arrays;
	char *str;
	unsigned int index;

	va_start(arrays, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(arrays, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(arrays);
}


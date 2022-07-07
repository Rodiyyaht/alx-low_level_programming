#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list abc;
	char *str;
	unsigned int lets;

	va_start(abc, n);

	for (lets = 0; lets < n; lets++)
	{
		str = va_arg(abc, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (lets != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(abc);
	printf("\n");
}

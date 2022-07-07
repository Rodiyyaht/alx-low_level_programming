#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - it returs sum of all its parameter
 * @n: number of arguments passed
 *
 * Return: 0 if n equals 0
 * otherwise, the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list dig;
	unsigned int g, sum = 0;

	va_start(dig, n);

	for (g = 0; g < n; g++)
		sum += va_arg(dig, int);

	va_end(dig);

	return (sum);
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list agu);
void print_int(va_list agu);
void print_float(va_list agu);
void print_string(va_list agu);

/**
 * print_char - prints a char
 * @agu: list of arguments pointing to
 * the character to be printed
 */
void print_char(va_list agu)
{
	char word;

	word = va_arg(agu, int);
	printf("%c", word);
}

/**
 * print_int - prits an integer
 * @agu: list of arguments pointing to
 * the intrger to be printed
 */
void print_int(va_list agu)
{
	int num;

	num = va_arg(agu, int);
	printf("%d", num);
}

/**
 * print_float - print a float
 * @agu: lists of arguments pointing to
 * the float to be printed
 */
void print_float(va_list agu)
{
	float dig;

	dig = va_arg(agu, double);
	printf("%f", dig);
}

/**
 * print_string - prints a string
 * @agu: lists of arguments pointing to
 * the string to be printed
 */
void print_string(va_list agu)
{
	char *str;

	str = va_arg(agu, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: a string of characters representing the argument types
 */
void print_all(const char * const format, ...)
{
	va_list agus;
	int k = 0, r = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(agus, format);

	while (format && (format + k))
	{
		r = 0;

		while (r < 4 && (format + k) != *(funcs[r].symbol))
			r++;

		if (r < 4)
		{
			printf("%s", separator);
			funcs[r].print(agus);
			separator = ", ";
		}
		k++;
	}

	printf("\n");

	va_end(agus);
}

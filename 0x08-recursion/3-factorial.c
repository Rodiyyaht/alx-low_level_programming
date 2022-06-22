#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: the number to be calculated
 * Return: If n > 0 - the factorial of n
 *         If n < 0 -1 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

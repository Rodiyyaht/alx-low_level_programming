#include "main.h"

int solve_prime(int i, int num);
int is_prime_number(int n);

/**
 * solve_prime - calculates if a number is a prime reursively
 * @i: number to evaluate
 * @num: iterator
 * Return: 1 if n is prime, 0 if not
 */
int solve_prime(int i, int num)
{
	if (i % num == 0)
		return (0);
	if (num == i / 2)
		return (1);
	return (solve_prime(i, num + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to be checked
 * Return: 0 if the integer is not a prime, otherwise 1.
 */
int is_prime_number(int n)
{
	int num = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (solve_prime(n, num));
}

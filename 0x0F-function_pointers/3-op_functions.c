#include "3-calc.h"

/**
 * op_add - adds two integrs
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the result of dividing a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives modulus of two integer
 * @a: the first integer
 * @b: the second integer
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

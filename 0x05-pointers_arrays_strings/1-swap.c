#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: swaps to b
 * @b: swaps to a
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

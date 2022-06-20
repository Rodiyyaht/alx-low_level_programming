#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: The matrix of integers
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int c, sum1 = 0, sum2 = 0;

	for (c = 0; c < size; c++)
	{
		sum1 += a[c];
		a += size;
	}

	a -= size;

	for (c = 0; c < size; c++)
	{
		sum2 += a[c];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}

#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the chessboard to be printed
 */
void print_chessboard(char (*a)[8])
{
	int r, k;

	for (r = 0; a[r][7]; r++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[r][k]);

		_putchar('\n');
	}
}

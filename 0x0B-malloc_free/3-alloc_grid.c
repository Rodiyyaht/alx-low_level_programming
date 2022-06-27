#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the 2d array
 * @height: the height of 2d array
 *
 * Return: NULL, if width or height is 0 or negative
 * otherwise, pointer to the 2d array of interger
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int hgt, wdh;

	if (height <= 0 || width <= 0)
		return (NULL);
	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);
	for (hgt = 0; hgt < height; hgt++)
	{
		twoD[hgt] = malloc(sizeof(int) * width);

		if (twoD[hgt] == NULL)
		{
			for (; hgt >= 0; hgt--)
				free(twoD[hgt]);
			free(twoD);
			return (NULL);
		}
	}

	for (hgt = 0; hgt < height; hgt++)
	{
		for (wdh = 0; wdh < width; wdh++)
			twoD[hgt][wdh] = 0;
	}

	return (twoD);
}

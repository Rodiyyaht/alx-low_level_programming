#include "function_pointers.h"

/**
 * int_index - searches for a function
 * @array: the array
 * @size: the number of elements in the array
 * @cmp: the pointer to the function used to compare values
 *
 * Return: index of the first element for which
 * the cmp function does not return 0
 * -1 if no elements match or
 * if size is less than equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

	if (array && cmp)
	{
		for (r = 0; r < size, r++)
		{
			if (cmp(array[r]) != 0)
				return (r);
		}
	}

	return (-1);
}

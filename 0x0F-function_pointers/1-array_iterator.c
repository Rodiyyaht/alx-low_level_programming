#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: the array
 * @size: the size of the array
 * @action: the pointer to the function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (!array || !action)
		return;
	for (k = 0; k < size; k++)
		action(array[k]);
}

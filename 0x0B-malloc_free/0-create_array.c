#include "main.h"
#include <stdlib.h>

/**
 * *create_array - it creates an arrays of char,
 * and initializes it with a specific char
 * @size: the size of array to be initialized
 * @c: the char to intialize the array with
 * Return: NULL if size = 0
 *         a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *it;

	if (size == 0)
	{
		return (NULL);
	}

	it = malloc(sizeof(char) * size);

	if (it == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		it[n] = c;
	return (it);
}

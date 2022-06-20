#include "main.h"

/**
 * *_memset - fills the memory with a constant byte
 * @s: is a pointer to the block of memory to fill
 * @b: is the value to be set
 * @n: number of bytes to be set to the value
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}

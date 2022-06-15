#include "main.h"

/**
 * *_strncpy - copies a string
 * @n: number of bytes of str to copy
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
			i++;
	}
	return (dest);
}

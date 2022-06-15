#include "main.h"

/**
 * *_strncat - concatenates n bytes strings from one to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *scr, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	j = 0;
	while (scr[j] != '\0' && j < n)
	{
		dest[i] = scr[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

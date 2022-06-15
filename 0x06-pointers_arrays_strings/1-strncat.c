#include "main.h"

/**
 * *_strncat - concatenates n bytes strings from one to another
 * @dest: destination string
 * @scr: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *scr, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; scr[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = scr[c];
	}
	return (dest);
}

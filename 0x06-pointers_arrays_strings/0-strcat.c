#include "main.h"

/**
 * *_strcat - concatenates two strings
 * overwriting the terminating null byte at the end of dest
 * and then add a terminating null byte
 * @scr: string to add
 * @dest: the string to append to
 *
 * Return: a pointer to the resulting dest
 */
char *_strcat(char *dest, char *scr)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	j = 0;
	while (scr[j] != '\0')
	{
		dest[i] = scr[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

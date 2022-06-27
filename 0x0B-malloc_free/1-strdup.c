#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: The string to be copied
 *
 * Return: NULL if str = NULL or if insufficient memory was available
 *         a pointer to the duplicated string on success
 */
char *_strdup(char *str)
{
	char *k;
	int i, l = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		l++;
	k = malloc(sizeof(char) * (l + 1));

	if (k == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		k[i] = str[i];
	k[l] = '\0';

	return (k);
}

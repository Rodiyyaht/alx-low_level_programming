#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string, concatenated upon
 * @s2: second string to be concatenated to s1
 *
 * Return: NULL if concatenation fails
 * otherwise, a pointer the newly-allocated space in memory
 * containing the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *g;
	int f, link = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (f = 0; s1[f] || s2[f]; f++)
		l++;

	g = malloc(sizeof(char) * l);

	if (g == NULL)
		return (NULL);

	for (f = 0; s1[f]; f++)
		g[link++] = s1[f];
	for (f = 0; s2[f]; f++)
		g[link++] = s2[f];

	return (g);
}

#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * each argument should be followed by a \n in the new string
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: NULL if ac = 0 and av = NULL, or if the program fails
 * else, a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *str;

	int arg, bit, fir, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (arg = 0; arg < ac; arg++)
	{
		for (bit = 0; av[arg][bit]; bit++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);
	fir = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (bit = 0; av[arg][bit]; bit++)
			str[fir++] = av[arg][bit];
		str[fir++] = '\n';
	}

	str[size] = '\0';

	return (str);
}

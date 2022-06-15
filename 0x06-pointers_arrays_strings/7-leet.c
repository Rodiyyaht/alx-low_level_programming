#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: the resulting string
 */
char *leet(char *s)
{
	int a = 0, b = 0, l = 5;
	char r[10] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char n[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[a])
	{
		b = 0;
		while (b < l)
		{
			if (s[a] == r[b] || s[a] - 32 == r[b])
			{
				s[a] = n[b];
			}
			b++;
		}
		a++;
	}
	return (s);
}

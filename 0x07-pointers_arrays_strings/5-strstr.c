#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to be located
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring
 * If the substring is not located - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int f, g;

	for (f = 0; haystack[f] != '\0'; f++)
	{
		for (g = 0; needle[g] != '\0'; g++)
		{
			if (haystack[f + g] != needle[g])
				break;
		}
		if (!needle[g])
			return (&haystack[f]);
	}
	return ('\0');
}

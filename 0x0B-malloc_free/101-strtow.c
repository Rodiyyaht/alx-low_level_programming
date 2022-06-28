#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locates the index marking the end of the
 * first word contained within a string
 * @str: the string to be searched
 * Return: the index marking the end of the initial word pointed to by str
 */
int word_len(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		j++;
		i++;
	}
	return (j);
}

/**
 * count_words - Counts the number of words contained within a string
 * @str: The string to be searched
 *
 * Return: The number of words contained within str
 */
int count_words(char *str)
{
	int i = 0, words = 0, j = 0;

	for (i = 0; *(str + i); i++)
		j++;
	for (i = 0; i < j; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_len(str + j);
		}
	}
	return (words);
}

/**
 * strtow - Splits a string into words
 * @str: string to be split
 *
 * Return: if str = NULL, str = "", or the function fails - NULL
 * else, a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **strings;
	int i = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;
		letters = word_len(str + i);

		strings[w] = malloc(sizeof(char) * (letters + 1));
		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = str[i++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}

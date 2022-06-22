#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int k, int index);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the length of a string
 * @s: The string to be measured
 * Return: The length of the string
 */
int find_strlen(char *s)
{
	int k = 0;

	if (*(s + k))
	{
		k++;
		k += find_strlen(s + k);
	}
	return (k);
}

/**
 * check_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 * @k: The length of s
 * @index: The index of the string to be checked
 *
 * Return: 1 if string is palindrome otherwise 0.
 */
int check_palindrome(char *s, int k, int index)
{
	if (s[index] == s[k / 2])
		return (1);

	if (s[index] == s[k - index - 1])
		return (check_palindrome(s, k, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if string is palindrome otherwise 0.
 */
int is_palindrome(char *s)
{
	int index = 0;
	int k = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, k, index));
}

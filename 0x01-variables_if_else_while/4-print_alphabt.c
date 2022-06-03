#include <stdio.h>

/**
 * main - print the alphabet in lowercase,
 * followed by a new line, except of e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar(ch);
	return (0);
}

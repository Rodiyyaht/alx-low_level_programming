#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * per line, followed by a newline
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}

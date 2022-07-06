#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int r, i;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	r = atoi(argv[1]);

	if (r < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < r; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == r - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}

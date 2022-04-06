#include <stdio.h>

/**
 * main - program that prints own name
 * @argv: argument volume
 *
 * Return: (0) Success.
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

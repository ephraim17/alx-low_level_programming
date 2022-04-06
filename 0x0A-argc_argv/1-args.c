#include <stdio.h>

/**
 * main - prints argument count
 * @argc: argument count
 * @argv: argument values
 *
 * Return: (0) Success.
 */

int main(int argc, char **argv)
{
	printf("%d\n", (argc - 1));
	(void)argv;
	return (0);
}

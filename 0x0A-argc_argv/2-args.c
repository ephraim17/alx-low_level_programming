#include <stdio.h>

/**
 * main - print all arguments passed
 * @argc: argument count
 * @argv: argument volume
 * Return: (0) Success.
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);
	return (0);
}

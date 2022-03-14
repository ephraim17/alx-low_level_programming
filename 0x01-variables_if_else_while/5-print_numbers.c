#include <stdio.h>

/**
 *  main - Task
 *
 *  Description: Print numbers 1 to 10 followed by a new line
 *  Return: Always(0) Success
 */

int main(void)
{
	int number = 0;

	for (number = 0 ; number <= 10 ; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}

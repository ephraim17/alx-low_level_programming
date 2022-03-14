#include <stdio.h>

/**
 *  main - task6
 *
 *  Description: Print numbers 0 to 10 using putchar
 *  Return: Always(0) Success
 */

int main(void)
{
	int number = 0;

	for (number = 0 ; number < 10 ; number++)
	{
		putchar(number);
		fflush(stdout);
	}
	putchar ('\n');
	return (0);
}

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

	while (number < 10)
	{
		putchar (number);
		number++;
	}
	putchar ('\n');
	return (0);
}

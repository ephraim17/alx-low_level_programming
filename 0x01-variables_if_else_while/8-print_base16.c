#include <stdio.h>

/**
 * main - task8
 *
 * Description: Print numbers 0 - 16
 * Return: Always(0) Success
 */

int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
	}
	for (i = 'a' ; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

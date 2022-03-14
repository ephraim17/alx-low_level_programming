#include <stdio.h>

/**
 *  main - desc
 *
 *  Description: words
 *  Return: Always(0) Success
 */

int main(void)
{
	char upperCase = 'A';
	char lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}
	while (upperCase <= 'Z')
	{
		putchar (upperCase);
		upperCase++;
	}
	putchar('\n');
	return (0);
}

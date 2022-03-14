#include <stdio.h>
/**
 * main - alphabet in lowercase, followed by a newline.
 *
 * Description: print alphabet in lowercase
 * Always return(0) Success
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}


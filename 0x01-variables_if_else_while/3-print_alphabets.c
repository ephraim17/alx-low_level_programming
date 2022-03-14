#include <stdio.h>

/**
 *  main - alphabet in lowercase, and then in uppercase, followed by a new line.
 *  
 *  Always return(0)
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
		putchar(upperCase);
		upperCase++;
	}
	putchar('\n');
	return(0);
}

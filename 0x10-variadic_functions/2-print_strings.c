#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: char to separate numbers
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ap, char *);

		if (str == NULL)
		{
			printf("nill");
		}
		else
		{
			if (i < (n - 1) && separator != 0)
			{
				printf("%s%s", str, separator);
			}
			else
			{
				printf("%s", str);
			}
		}
	}
	va_end(ap);
	printf("\n");
}

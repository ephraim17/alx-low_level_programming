#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints all numbers followed by \n
 * @separator: char to separate numbers
 * @n: input
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(ap, int), (separator && i != n - 1) ? separator : "");
	}
	va_end(ap);
	printf("\n");
}

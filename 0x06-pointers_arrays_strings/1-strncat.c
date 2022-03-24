#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int l1, i;

	l1 = strlen(dest);
	for (i = 0; i < n; i++)
	{
		dest[l1 + i] = src[i];
	}
	return (dest);
}

#include "main.h"
#include <string.h>
/**
 * main - concat two strings
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int l1, l2, i;

	l1 = strlen(dest);
	l2 = strlen(src);

	for (i = 0; i <= l2; i++)
	{
		dest[l1 + i] = src[i];
	}

	return (dest);
}

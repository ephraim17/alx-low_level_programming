#include "main.h"
/**
 * _strncpy - function to copy one string to another
 * @dest: pointer to destination string
 * @src: pointer to source destination
 * @n: int params
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

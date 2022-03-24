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

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}

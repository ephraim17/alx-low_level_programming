#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: target string
 * @c: character to locate
 *
 * Return: S if char is found, NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}

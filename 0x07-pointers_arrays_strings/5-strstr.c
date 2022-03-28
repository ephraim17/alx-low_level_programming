#include "main.h"
#include <stddef.h>
/**
 * _strstr - find first occurrence of string
 *
 * @haystack: target string
 * @needle: source string
 *
 * Return: Pointer to substring or null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *first, *compare;

	while (*haystack)
	{
		first = haystack;
		compare = needle;
		while (*haystack && *compare && *haystack == *compare)
		{
			haystack++;
			compare++;
		}
		if (!*compare)
		{
			return (first);
		}
		else
		{
			haystack = first + 1;
		}
	}
	return (NULL);
}

#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - allocates space in memory
 * @str: input string
 *
 * Return: Returns a pointer to a newly allocated space
 */

char *_strdup(char *str)
{
	char *duplicate_num;
	int i = 0, len = 0;

	duplicate_num = malloc(sizeof(char) * (len + 1));
	if (str == 0 || duplicate_num == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		duplicate_num[i] = str[i];
		len++;
	}
	duplicate_num[len] = '\0';
	return (duplicate_num);
}

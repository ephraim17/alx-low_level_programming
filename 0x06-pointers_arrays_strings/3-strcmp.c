#include "main.h"
#include <string.h>

/**
 * _strcmp - function to compare two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: flag.
 */

int _strcmp(char *s1, char *s2)
{
	int flag = 0,  i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = s1[i] - s2[i];
			break;
		}
	}
	return (flag);
}

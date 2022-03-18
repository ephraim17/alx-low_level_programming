#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100,
 * but for multiples of 3 print Fizz. For
 * multiples of 5 print Buzz. For numbers which are multiples
 * of both, print FizzBuzz
 * Return: Always (0) Sucess
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}


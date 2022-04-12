#include <stdio.h>


/**
 * init_dog - dog structure
 * @d: first param
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: (0) Success.
 */

void init_dog(struct dog *d, char name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
	return (0);
}

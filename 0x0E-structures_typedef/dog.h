#ifndef DOG_H
#define DOG_H

/**
 * struct dog - header file
 * @name: Name of target
 * @age: age of target
 * @owner: Owener of dog
 * Return: (0) Success
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

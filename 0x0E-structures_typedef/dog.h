#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - this is a new type for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif /*DOG_H*/

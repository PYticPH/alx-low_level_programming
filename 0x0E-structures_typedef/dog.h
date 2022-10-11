#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - dog data
 *
 * @name: name of dog
 * @age:  age of dog
 * @owner: name of dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d,  char  *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif

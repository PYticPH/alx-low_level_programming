#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Function to print dog data
 *
 * @d: dog data (struct)
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name ==  NULL || d->age < 0 || d->name == NULL)
			printf("nil\n");
		else
			printf("Name: %s\nAge: %.5f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}

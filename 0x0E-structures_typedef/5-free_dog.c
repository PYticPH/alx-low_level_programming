#include "dog.h"

/**
 * free_dog - Function to that frees dogs
 *
 * @d: parameter typedef struct dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);
	free(d->name);
	free(d->owner);
	free(d);
}

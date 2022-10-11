#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Function to create new dog data
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: success/failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int i;
	int lenName = _strlen(name);
	int lenOwner = _strlen(owner);

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = malloc(sizeof(char) * lenName + 1);
	if (newDog->name == NULL)
	{
		free(newDog->name);
		return (NULL);
	}
	for (i = 0; i <= lenName; i++)
		newDog->name[i] = name[i];
	newDog->owner = malloc(sizeof(char) * lenOwner + 1);
	if (newDog->owner == NULL)
	{
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i <= lenOwner; i++)
		newDog->owner[i] = owner[i];
	newDog->age = age;
	return (newDog);

}


/**
 * _strlen - Function to count length of string
 *
 * @c: parameter string to count
 *
 * Return: int
 */

int _strlen(char *c)
{
	int i;
	int length = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		length += 1;
	}
	return (length);
}


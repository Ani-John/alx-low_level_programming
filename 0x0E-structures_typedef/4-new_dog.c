#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (owner == NULL || name == NULL || age < 0)
		return (NULL);

	dog = malloc(sizeof(char) * sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = malloc((strlen(name) + 1));
	if (dog->name == NULL)
	{	
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	dog->owner = strcpy(dog->owner, owner);
	dog->name = strcpy(dog->name, name);
	dog->age = age;

	return (dog);
}

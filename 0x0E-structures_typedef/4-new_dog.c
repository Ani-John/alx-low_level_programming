#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: the created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	dog_t newdog;
		newdog.name = name;
		newdog.age = age;
		newdog.owner = owner;

	p = &newdog;
	return (p);
}

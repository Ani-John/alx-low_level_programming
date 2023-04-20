#include "dog.h"
/**
 * init_dog - a function that initializes a variable of type struct dog.
 * @d: The variable "dog".
 * @name: dog name.
 * @age: dog age.
 * @owner: owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	(*d).age = age;
	(*d).name = name;
	(*d).owner = owner;
	}
}

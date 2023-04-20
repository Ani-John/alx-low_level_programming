#include <stdlib.h>
#include "dog.h"
/**
  * function that frees dogs.
  * @d: a pointer to the address of dog
  */
  void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

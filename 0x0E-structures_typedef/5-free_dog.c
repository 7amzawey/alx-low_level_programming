#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - is the function that will free the poor
 * dogs
 * @d: is the poor dogs
 */


void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

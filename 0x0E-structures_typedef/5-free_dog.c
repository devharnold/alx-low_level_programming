#include <stdlib.h>
#include "dog.h"
#include "main.h"

/**
 * free_dog - freeing memory for a struct dog
 * @d: dog being freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}


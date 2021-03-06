#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - print dog
 * @d: dog type
 *
 *
 *
 * Return: 0
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

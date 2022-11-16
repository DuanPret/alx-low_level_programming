#include <stdlib.h>
#include "main.h"

/**
 * free_dog -Free memory(doggos)
 *
 * @d: array
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free((*d).owner);
	free(d->name);
	free(d);
}

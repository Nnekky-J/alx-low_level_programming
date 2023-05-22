#include <stdlib.h>
#include "dog.h"
/**
  *free_dog - Frees dogs
  *
  *@d: The second parametet
  *
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

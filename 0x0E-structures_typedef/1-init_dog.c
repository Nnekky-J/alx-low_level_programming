#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
  *init_dog - Name of the struct
  *
  *@d: The first member
  *
  *@name: The second member
  *
  *@age: The third member
  *
  *@owner: The fourth member
  *
  *Description: The name of struct dog
  *
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	strcpy(d->name = name);
	d->age = age;
	strcpy(d->owner = owner);
}

#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize the struct
 * @d: pointer for struct
 * @name: dog name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Ok\n");
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

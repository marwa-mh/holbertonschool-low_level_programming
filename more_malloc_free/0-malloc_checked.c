#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - return memory location
 * @b: size of variable
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}

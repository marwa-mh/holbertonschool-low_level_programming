#ifndef _dog_h_
#define _dog_h_

typedef struct dog dog_t;
/**
 * struct dog - structure
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

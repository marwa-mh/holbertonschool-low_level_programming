#ifndef _dog_t_h_
#define _dog_t_h_
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
void print_dog(struct dog *d);
/**
 * struct dog_t - structure
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};
#endif

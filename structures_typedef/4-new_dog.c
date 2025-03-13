#include "dog.h"
#include <stdlib.h>
/**
 * cpstr - copy string
 * @str: input
 * Return: string
 */
char *cpstr(char *str)
{
	char *p_str = str;
	char *newstr;
	int size = 0, i = 0;

	while (*str != '\0')
	{
		size++;
		str++;
	}
	size++;
	newstr = malloc(sizeof(char) * size);
	if (newstr == NULL)
	{
		free(newstr);
		return (NULL);
	}
	str = p_str;
	while (i < size)
	{
		newstr[i] = str[i];
		i++;
	}
	return (newstr);
}
/**
 * new_dog - create new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = cpstr(name);
	dog->age = age;
	dog->owner = cpstr(owner);
	if (dog->owner == NULL || dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	return (dog);
}

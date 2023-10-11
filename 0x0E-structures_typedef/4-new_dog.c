#include "dog.h"
#include <stdlib.h>
/**
 * *_strcpy - copy string from another
 * @dest: is the first string
 * @teez: is the 2nd string
 * Return: the copied string
 */
char *_strcpy(char *dest, char *teez)
{	int i = 0;
	while (teez[i])
	{
		dest[i] = teez[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * *new_dog - is the func
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the owner of the dog
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int size = 0;
	int s = 0;
	char *temp = name;
	char *tem = owner;
	dog_t *newDog;

	while (*temp++)
	{
		size++;
	}
	newDog = malloc(sizeof(dog_t));

	if (!newDog)
	return (NULL);
	newDog->name = malloc(sizeof(char) * (size + 1));
	if (!newDog->name)
	{
	free(newDog);
	return (NULL);
	}
	while (*tem++)
	{
	s++;
	}
	_strcpy(newDog->name, name);
	newDog->owner = malloc(sizeof(char) * (s + 1));
	if (!newDog->name)
	{
	free(newDog->name);
	free(newDog);
	return (NULL);
	}
	_strcpy(newDog->owner, owner);
	newDog->age = age;
	return (newDog);
}

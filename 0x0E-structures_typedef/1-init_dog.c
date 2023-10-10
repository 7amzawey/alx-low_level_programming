#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: is the d of the dog
 * @name: is snoop dogg hahhahhahhah :)
 * @age: snoop dogg's age
 * @owner: the dogg's dog owner which is dogg that is
 * simple
 * Return: the information about dog darling
 */
void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}

}

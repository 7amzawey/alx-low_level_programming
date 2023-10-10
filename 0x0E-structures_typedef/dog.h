#ifndef DOG_H
#define DOG_H
/**
 * struct dog - is the dam dog
 * @name: the dog name
 * @age: the dog name
 * @owner: the owner name
 * Description: it is just a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

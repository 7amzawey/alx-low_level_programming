#include "dog.h"
#include <stdio.h>
/**
 * print_dog - that will print the dog's info
 * @d: this is the name of the struc
 */
void print_dog(struct dog *d)
{
	if (d)
	{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}

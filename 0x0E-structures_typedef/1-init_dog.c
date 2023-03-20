#include "dog.h"

/**
  * init_dog - Function to initialize a function
  * struct dog - Structure of a dogs info
  * @d: Pointer to a struct
  * @name: Pointer to a string
  * @age: Float variable
  * @owner: Pointer to a string (owner)
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

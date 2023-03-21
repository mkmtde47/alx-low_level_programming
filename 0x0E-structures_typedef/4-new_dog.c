#include "dog.h"

/**
  * new_dog - Pointer to a struct
  * @name: Pointer to a string (dog name)
  * @age: Variable of tye float
  * @owner: Pointer to a string (dog owner)
  * Return: Pointer if successful
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}

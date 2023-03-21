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
/*	char *name_copy;
	char *owner_copy;*/
	
	dog = malloc(sizeof(dog_t));
/*	name_copy = malloc(strlen(dog->name) + 1);
	owner_copy = malloc(strlen(dog->owner) + 1);*/
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
/*	if (name_copy == NULL)
	{
		free(name_copy);
		return (NULL);
	}
	if (owner_copy == NULL)
	{
		free(owner_copy);
		return (NULL);
	}*/
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
/*	strcpy(name_copy,dog->name);
	strcpy(owner_copy,dog->owner); */
	return (dog);
}

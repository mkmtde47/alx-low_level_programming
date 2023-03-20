#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dog dog_t

/**
  * struct dog - Structure containing information of a dog
  * @name: Pointer to a char
  * @age: Variable float
  * @owner: Pointer to a char
  *
  * Description: This a long description for a dogs struct
  */
dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
#endif

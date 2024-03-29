#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * struct dog - Structure containing information of a dog
  * @name: Pointer to a char
  * @age: Variable float
  * @owner: Pointer to a char
  *
  * Description: This a long description for a dogs struct
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

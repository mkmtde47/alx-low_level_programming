#ifndef MAIN_H
#define MAIN_H

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

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

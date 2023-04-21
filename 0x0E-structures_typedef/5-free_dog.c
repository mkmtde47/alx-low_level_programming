#include "dog.h"

/**
  * free_dog - Function to free a struct from memory (instance)
  * @d: Pointer to a struct
  */
void free_dog(dog_t *d)
{
	free(d);
}

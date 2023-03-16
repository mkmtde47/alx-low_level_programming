#include "main.h"

/**
  * malloc_checked - Function returns a pointer
  * @b: Size_t of memory
  * Return: Pointer to a string
  */
void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(b);
	if (str == NULL)
	{
		exit(98);
	}

	return (str);
}

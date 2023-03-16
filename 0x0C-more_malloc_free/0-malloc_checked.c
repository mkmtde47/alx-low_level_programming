#include "main.h"

/**
  * malloc_checked - Function returns a pointer
  * @b: Size_t of memory
  * Return: Pointer to a string
  */
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);
	if (str == NULL)
	{
		free(str);
		return (0);
	}

	return (str);
}

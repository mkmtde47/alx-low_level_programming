#include "main.h"

/**
  * create_array - A function that returns a pointer to an ararray
  * @size: Space allocated
  * @c: Initializer
  * Return: Pointer if successful, Null if not
  */
char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = malloc(size);
	if (arr == NULL)
	{
		return (NULL);
	}
	arr[0] = c;

	return (arr);
}

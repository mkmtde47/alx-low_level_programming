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
	unsigned int i;

	arr = malloc(size);
	if (arr == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}

#include "function_pointers.h"

/**
  * array_iterator - Function that iterates array
  * @array: Pointer to array
  * @size: Size of array variable
  * @action: Pointer to function variable
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}

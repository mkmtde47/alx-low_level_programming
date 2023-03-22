#include "function_pointers.h"

/**
  * int_index - Function that searches for integer
  * @array: Pointer to an array (int)
  * @size: Size of array
  * @cmp: Pointer to a function
  * Return: Index for success, -1 if not
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return;
	}
	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array++)) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}

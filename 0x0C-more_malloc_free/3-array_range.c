#include "main.h"

/**
  * array_range - Function for a array
  * @min: minimum value
  * @max: maximum value
  * Return: Pointer if succesful, Null if not
  */
int *array_range(int min, int max)
{
	int *arr;
	unsigned int i;
	unsigned int sum;

	if (min > max)
	{
		return (NULL);
	}
	sum = max - min;
	arr = malloc(sizeof(int) * sum + 1);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	else
	{
		for (i = 0; i <= sum; i++)
		{
			arr[i] = min + i;
		}
	}
	return (arr);
}

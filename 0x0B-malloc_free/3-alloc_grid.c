#include "main.h"

/**
  * alloc_grid - Function allocats 2d array
  * @width: length of rows
  * @height: leng of columns
  * Return: pointer to array
  */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	arr = malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
	}
	return(arr);
}

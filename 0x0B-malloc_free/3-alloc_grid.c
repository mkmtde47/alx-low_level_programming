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
	int j;

	arr = malloc(height * sizeof(int *));
	if (width == 0 || height == 0)
	{
		free(arr);
		return (NULL);
	}
	else if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(width * sizeof(int));
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				arr[i][j] = 0;
			}
		}
	}
	return (arr);
}

#include "main.h"

/**
  * print_square - Prints squares using #
  * @size: Square dimensions
  */
void print_square(int size)
{
	int j;
	int i;

	for (j = 0; j < size; j++)
	{
		if (size > 0)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}

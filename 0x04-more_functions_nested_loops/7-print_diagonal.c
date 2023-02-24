#include "main.h"

/**
  * print_diagonal - Prints diagonal line in terminal
  * @n : Number of _ to be printed
  */
void print_diagonal(int n)
{
	int a;
	int j;
	int i;

	a = 1;
	if (n < 1)
	{
		_putchar('\n');
	}
	for (j = 0; j < n; j++)
	{
		if (a > 1)
		{
			for (i = 1; i < a; i++)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
}

#include "main.h"

/**
  * more_numbers - Prints 0-14 ten times
  *
  */
void more_numbers(void)
{
	int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
	int i;
	int j;

	i = 0;
	j = 0;
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(numbers[i] + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

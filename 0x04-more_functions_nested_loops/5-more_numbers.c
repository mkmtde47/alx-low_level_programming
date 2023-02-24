#include "main.h"

/**
  * more_numbers - Prints 0-14 ten times
  */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}

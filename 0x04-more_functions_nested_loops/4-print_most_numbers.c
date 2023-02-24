#include "main.h"

/**
  * print_numbers - Prints 0-9
  *
  */
void print_numbers(void)
{
	int numbers[] = {0, 1, 3, 5, 6, 7, 8, 9};
	int i;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		_putchar(numbers[i] + '0');
	}
	_putchar('\n');
}

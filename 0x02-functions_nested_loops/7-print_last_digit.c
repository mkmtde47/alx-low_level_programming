#include <stdio.h>
#include "main.h"

/**
  * print_last_digit - Pritn last digit
  * @c: Variable/temp
  *
  * Return: Last digit
  */
int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
	{
		c = c * (-1);
	}
	_putchar('0' + c);

	return (c);
}

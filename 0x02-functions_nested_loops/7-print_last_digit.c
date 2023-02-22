#include <stdio.h>
#include "main.h"

/**
  * print_last_digit - Pritn last digit
  * @a: Digit
  *
  * Return: Last digit
  */
int print_last_digit(int c)
{
	int a;

	if (a < 0)
	{
		a = a * (-1);
	}
	a = c % 10;
	_putchar('0' + a);
	
	if (a < 0)
	{
		a = a * (-1);
	}

	return (a);
}

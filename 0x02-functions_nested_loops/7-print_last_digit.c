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

	a = c % 10;
	_putchar(a);
	return (a);
}

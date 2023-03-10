#include <stdio.h>
#include "main.h"

/**
  * _abs - Absolute value compute
  * @a: Value computed
  *
  * Return: Absolute value
  */
int _abs(int a)
{
	if (a < 0)
	{
		a = a * (-1);
	}
	return (a);
}

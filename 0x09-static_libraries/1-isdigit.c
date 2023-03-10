#include "main.h"

/**
  * _isdigit - Tests if given is digit
  * @c: Digit to be tested
  * Return: 1 is digit, otherwise 0
  */
int _isdigit(int c)
{
	int digits[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;

	i = 0;
	c = c - '0';
	while (i < 11)
	{
		if (c == digits[i])
		{
			break;
		}
		i++;
	}
	if (digits[i] == c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

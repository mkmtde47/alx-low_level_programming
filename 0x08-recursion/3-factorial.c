#include "main.h"

/**
  * factorial - calculates the factorial of m
  * @n: Variable n
  * Return: The factorial of n
  */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

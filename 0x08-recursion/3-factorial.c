#include "main.h"

/**
  * factorial - calculates the factorial of m
  * @n: Variable n
  * Return: The factorial of n
  */
int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

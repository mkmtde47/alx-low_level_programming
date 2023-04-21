#include "main.h"

/**
  * _sqrt_recursion - A function that calls a square root function
  * @n: Number
  * Return: Squareroot or -1 if none
  */
int _sqrt_recursion(int n)
{
	return (square_root(n, 0, n));
}

/**
  * square_root - A function to find the square root
  * @num: Number
  * @low: Integer depicting lowest
  * @high: Integer highest possible value
  * Return: Square root
  */
int square_root(int num, int low, int high)
{
	int mid;
	int mid_squared;

	if (low > high)
	{
		return (-1);
	}
	mid = (low + high) / 2;
	mid_squared = mid * mid;

	if (mid_squared == num)
	{
		return (mid);
	}
	else if (mid_squared < num)
	{
		return (square_root(num, mid + 1, high));
	}
	else
	{
		return (square_root(num, low, mid - 1));
	}
}

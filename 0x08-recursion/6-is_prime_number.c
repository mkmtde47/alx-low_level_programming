#include "main.h"
#include <math.h>
/**
  * is_prime_number - A function that calls is prime
  * @n: Number to be checked
  */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
  * is_prime - Function for prime numbers
  * @n: Number
  * @divisor: Number (divisor) to check is n is divisable
  * Return: 1 if prime, 0 if not
  */
int is_prime(int n, int divisor)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (divisor > _sqrt_recursion(n))
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, divisor + 1));
	}
}
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

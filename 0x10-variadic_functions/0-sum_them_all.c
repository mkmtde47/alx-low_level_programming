#include "variadic_functions.h"

/**
  * sum_them_all - Sum function
  * @n: NUmber count (arg)
  * @...: Extra/variable arguments
  * Return: Sum if successful, 0 if not
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list argptr;
	unsigned int i;
	int sum;

	va_start(argptr, n);

	i = 0;
	sum = 0;
	while (i < n)
	{
		if (n == 0)
		{
			return (0);
		}
		sum += va_arg(argptr, int);
		i++;
	}
	va_end(argptr);
	return (sum);
}

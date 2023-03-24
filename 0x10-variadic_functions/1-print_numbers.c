#include "variadic_functions.h"

/**
  * print_numbers - Function that prints numbers
  * @separator: Pointer to a string
  * @n: Integer
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argptr;
	unsigned int i;

	va_start(argptr, n);

	i = 0;
	while (i < n)
	{
		if (separator == NULL)
		{
			i++;
			continue;
		}
		printf("%d", va_arg(argptr, int));
		if (i == n - 1)
		{
			break;
		}
		printf("%s", separator);
		i++;
	}
	printf("\n");
}

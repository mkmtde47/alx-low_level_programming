#include "variadic_functions.h"

/**
  * print_strings - Function that prints numbers
  * @separator: Pointer to a string
  * @n: Integer
  */
void print_strings(const char *separator, const unsigned int n, ...)
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
		if (va_arg(argptr, char *) == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(argptr, char *));
		}
		if (i == n - 1)
		{
			break;
		}
		printf("%s", separator);
		i++;
	}
	printf("\n");
}

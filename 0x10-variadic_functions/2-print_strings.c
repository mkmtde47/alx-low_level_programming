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
	char *str;

	va_start(argptr, n);

	i = 0;
	while (i < n)
	{
		str = va_arg(argptr, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
}

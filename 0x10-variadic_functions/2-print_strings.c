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
		if (argptr == NULL)
		{
			printf("nil");
		}
		else
		{
			/*sprintf(str, "%d", va_arg(argptr, int));*/
			/*itoa(va_arg(argptr, int), str, 10);*/
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

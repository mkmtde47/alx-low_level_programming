#include "main.h"

/**
  * print_array - Prints a specific number of values of an array
  * @a: A pointer to the array
  * @n: Specified number to print
  */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(",");
			printf(" ");
		}
		i++;
	}
	printf("\n");
}

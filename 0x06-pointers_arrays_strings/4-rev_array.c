#include "main.h"

/**
  * reverse_array - Reverses integers in an array
  * @a: Pointer to array
  * @n: Array size
  */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	n = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - i);
		*(a + n - i) = temp;
	}
}

#include "main.h"

/**
  * swap_int - Swaps two variable's values
  * @a: Pointer to variable to be swapped
  * @b: Pointer to varuableto be swapped
  */
void swap_int(int *a, int *b)
{
	int temp1;
	int temp2;

	temp1 = *a;
	temp2 = *b;
	*b = temp1;
	*a = temp2;
}

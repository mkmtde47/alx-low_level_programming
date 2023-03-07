#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Prints the digonals sum
  * @a: Pointer to a 2d array
  * @size: Array size
  */
void print_diagsums(int *a, int size)
{
        int i;
        int j;
        int diagsum;
	int diagsum2;

        diagsum = 0;
	diagsum2 = 0;
        i = 0;
        j = 0;
        while (i < size)
        {
                diagsum = diagsum + a[i * size + j]; 
                j++;
                i++;
        }
        i = 0;
        j = 0;
        while (i < size)
        {
                diagsum2 = diagsum2 + a[i * size - j]; 
                j++;
                i++;
        }
        printf("%d, %d\n", diagsum, diagsum2);
}

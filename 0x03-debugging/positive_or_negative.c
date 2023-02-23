#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include "main.h"

/* betty style doc for function main goes there */
/**
  * main - Entry point
  *
  * Return: Zero if successful
  */
void positive_or_negative(int n)
{
	/* your code goes there */

	if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is positive\n", n);
	}
}

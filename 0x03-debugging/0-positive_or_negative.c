#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
  * main - Entry point
  *
  * Return: Zero if successful
  */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (i == 0)
	{
		printf("%d is zero\n", i);
	} else if (i < 0)
	{
		printf("%d is negative\n", i);
	} else
	{
		printf("%d is positive\n", i);
	}
}

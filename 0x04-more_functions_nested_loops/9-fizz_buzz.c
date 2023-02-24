#include <stdio.h>

/**
  * main - Print the fuzz bizz test
  * @void: No args
  * Return: Zero if successful
  */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i == 100) && (i % 5 ==0))
		{
			printf("buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("fizzbuzz");
		}
		else if (i % 5 == 0)
		{
			printf("buzz");
		}
		else if (i % 3 == 0)
		{
			printf("fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

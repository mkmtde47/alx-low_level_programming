#include <stdio.h>

/**
  * main - Entry point
  * Return: Zero if successful
  */
int main(void)
{
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s%s ", fizz, buzz);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", buzz);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", fizz);
		}
		else
		{
			printf("%d ", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

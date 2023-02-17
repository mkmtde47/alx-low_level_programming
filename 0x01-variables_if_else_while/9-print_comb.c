#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Zero if successful
  */
int main(void)
{
	int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + numbers[i]);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

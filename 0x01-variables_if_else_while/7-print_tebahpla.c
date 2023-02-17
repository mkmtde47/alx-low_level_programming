#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Zero if successful
  */
int main(void)
{
	char lower[] = {'a', 'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z'};
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(lower[i]);
	}
	putchar('\n');
	return (0);
}

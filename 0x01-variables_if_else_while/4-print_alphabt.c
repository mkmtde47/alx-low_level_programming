#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Zero if successful
  */
int main(void)
{
	char lower[] = {'a', 'b', 'c', 'd', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
		'o', 'p', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'};
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(lower[i]);
	}
	putchar('\n');
	return (0);
}

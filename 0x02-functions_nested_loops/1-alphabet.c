#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  *
  * Return: Zero if successful
  */
int main(void)
{
	char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f'
		, 'g', 'h', 'i', 'j', 'k', 'l', 'm'
			, 'n', 'o', 'q', 'r', 's'
			, 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int n;

	n = 0;
	for (n = 0; n < 26; n++)
	{
		_putchar(alpha[n]);
	}
	_putchar('\n');
	return (0);
}

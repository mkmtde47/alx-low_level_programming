#include <stdio.h>
#include "main.h"

/**
  * print_alphabet_x10 - Function for printing alphabets
  *
  * Return: Zero if successful
  */
void print_alphabet_x10(void);
{
	char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'
		, 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o'
			, 'p', 'q', 'r', 's', 't', 'u'
			, 'v', 'w', 'x', 'y', 'z'};
	int n;
	int i;

	i = 0;
	while(i < 10)
	{
		for (n = 0; n < 26; n++)
		{
			_putchar(alpha[n]);
		}
		_putchar('\n');
		i++;
	}
}

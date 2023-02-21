#include <stdio.h>
#include "main.h"

/**
  * print_alphabet - Function for printing alphabets
  *
  * Return: Zero if successful
  */
void print_alphabet(void)
{
	char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'
		, 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o'
			, 'p', 'q', 'r', 's', 't', 'u'
			, 'w', 'x', 'y' , 'z'};
	int n;

	for (n = 0; n < 26; n++)
	{
		_putchar(alpha[n]);
	}
	_putchar('\n');
}

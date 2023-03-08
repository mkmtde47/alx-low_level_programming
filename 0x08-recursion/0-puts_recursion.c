#include "main.h"

/**
  * _puts_recursion - Prints a string
  * @s: Pointer to a string
  */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}

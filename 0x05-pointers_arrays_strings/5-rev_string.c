#include "main.h"

/**
  * rev_string - Prints a strngi in reverse
  * @s: String to be printed
  */
void rev_string(char *s)
{
	int i;
	int strln;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	strln = i + 1;
	i = 0;
	while (strln > i)
	{
		_putchar(*(s + strln));
		strln--;
	}
	_putchar('\n');
}

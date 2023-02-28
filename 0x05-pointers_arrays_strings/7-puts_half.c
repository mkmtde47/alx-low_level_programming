#include "main.h"

/**
  * puts_half - Findsthe strings length
  * @str: Pointer containg string
  */
void puts_half(char *str)
{
	int strln;
	int i;

	i = 0;
	strln = 0;
	while (*(str + i) != '\0')
	{
		if (*str == '\0')
		{
			break;
		}
		strln = i + 1;
		i++;
	}
	i = strln / 2;
	if ( strln % 2 != 0)
	{
		i++;
	}
	while (i < strln)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

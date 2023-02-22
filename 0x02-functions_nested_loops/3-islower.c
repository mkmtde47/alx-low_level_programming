#include <stdio.h>
#include "main.h"

/**
  * _islower - Function for checking lower case
  * alphabets
  * @c: int variable
  *
  * Return: One if lowercase, Zero if otherwise
  */
int _islower(int c)
{
	char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'
		, 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o'
			, 'p', 'q', 'r', 's', 't', 'u'
			, 'v', 'w', 'x', 'y', 'z'};
	int i;

	i = 0;
	while (c != alpha[i])
	{
		i++;
	}

	if (c == alpha[i])
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

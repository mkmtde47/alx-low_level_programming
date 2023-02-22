#include <stdio.h>
#include "main.h"

/**
  * int _isalpha - Function for checking alphabets
  *
  * Return: One if alphabet, Zero if otherwise
  */
int _isalpha(int c)
{
	char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'
		, 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o'
			, 'p', 'q', 'r', 's', 't', 'u'
			, 'v', 'w', 'x', 'y', 'z'};
	char alphABC[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'
		, 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'
			, 'P', 'Q', 'R', 'S', 'T', 'U'
			, 'V', 'W', 'X', 'Y', 'Z'};
	int i;

	i = 0;
	while (c != alpha[i] || c != alphABC[i])
	{
		i++;
	}

	if (c == alpha[i] || c == alphABC[i])
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

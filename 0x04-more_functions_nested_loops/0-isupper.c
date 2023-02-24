#include "main.h"

/**
  * _isupper - Function for checking upper case alphabets
  * @c: int variable
  * Return: One if lowercase, Zero if otherwise
  */
int _isupper(int c)
{
	char alpha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'
		, 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'
			, 'P', 'Q', 'R', 'S', 'T', 'U'
			, 'V', 'W', 'X', 'Y', 'Z'};
	int i;

	i = 0;
	while (i < 26)
	{
		if (c == alpha[i])
		{
			break;
		}
		i++;
	}

	if (alpha[i] == c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

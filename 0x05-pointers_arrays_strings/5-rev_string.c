#include "main.h"

/**
  * rev_string - Prints a strngi in reverse
  * @s: String to be printed
  */
void rev_string(char *s)
{
	int i;
	int strln;
	char temp;
	int midpoint;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	strln = i;
	midpoint = strln / 2;
	for (i = 0; i < midpoint; i++)
	{
		temp = s[i];
		s[i] = s[strln - i - 1];
		s[strln - i - 1] = temp;
	}
}

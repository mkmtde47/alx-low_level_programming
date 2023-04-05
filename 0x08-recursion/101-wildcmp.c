#include "main.h"

/**
  * wildcmp - A function that compares two strings
  * @s1: String 1
  * @s2: String 2
  * Return: 1 if strings match, 0 if not
  */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		else
		{
			return (wildcmp(s1 + 1, s2));
		}
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}

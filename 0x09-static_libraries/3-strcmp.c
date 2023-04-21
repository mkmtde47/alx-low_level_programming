#include "main.h"

/**
  * _strcmp - Compare two strings
  * @s1: string 1
  * @s2: string 2
  * Return: Zero if equal, 15 if >,-15 if <
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((*(s1 + i) != '\0') && (*(s2 + i) != '\0'))
	{
		if (*(s1 + i) < *(s2 + i))
		{
			return (-15);
		}
		else if (*(s1 + i) > *(s2 + i))
		{
			return (15);
		}
		else
		{
			if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			{
				break;
			}
		}
		i++;
	}
	return (0);
}

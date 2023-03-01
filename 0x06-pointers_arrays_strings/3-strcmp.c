#include "main.h"

/**
  * _strcmp - Compare two strings
  * @s1: string 1
  * @s2: string 2
  * Return: Zero if successful
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

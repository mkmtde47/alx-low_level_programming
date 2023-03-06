#include "main.h"

/**
  * _strchr - Locates a character in a string
  * @s: String
  * @c: Character
  * Return: 0 if not found, character if found
  */
char *_strchr(char *s, char c)
{
	int i;
	int len;

	i = 0;
	len = strlen(s);
	while (i < len)
	{
		if (c == *(s + i))
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}

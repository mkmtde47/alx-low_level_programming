#include "main.h"

/**
  * _strpbrk - Searches for bytes in string
  * @s: Main string
  * @accept: Bytes
  * Return: s if successful, Null if not
  */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int len2 = strlen(accept);

	i = 0;
	j = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (j < len2)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

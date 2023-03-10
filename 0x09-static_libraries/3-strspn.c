#include "main.h"

/**
  * _strspn - Gets length of a prefix substring
  * @s: Main string
  * @accept: Prefix substring
  * Return: s if successful, Null if not
  */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int len;
	int len2;

	i = 0;
	len = 0;
	j = 0;
	len2 = strlen(accept);
	while (*(s + i) != ',')
	{
		j = 0;
		while (j < len2)
		{
			if (*(s + i) == *(accept + j))
			{
				len++;
			}
			j++;
		}
		i++;
	}
	return (len);
}

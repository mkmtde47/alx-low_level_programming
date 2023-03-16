#include "main.h"

/**
  * string_nconcat - Function that concatenates two strings
  * @s1: First string
  * @s2: Second string
  * @n: Length of second string
  * Return: str if successful, Null if failed
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str = malloc(sizeof(char) * (strlen(s1) + 1) * (strlen(s2) + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < strlen(s1) + 1; i++)
	{
		str[i] = *(s1 + i);
	}
	i--;
	for (j = 0; j < n; j++)
	{
		str[i] = *(s2 + j);
		i++;
	}
	return (str);
}

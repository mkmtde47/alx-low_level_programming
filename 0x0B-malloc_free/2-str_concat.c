#include "main.h"

/**
  * str_concat - Function that concatenates two strings
  * @s1: String 1
  * @s2: String 2
  * Return: Pointer to string if successful, NULL if not successful
  */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len = strlen(s1) + strlen(s2);
	int i;
	int j;

	i = 0;
	j = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str = malloc(sizeof(char) * len);
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*(s1 + i) != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		while (*(s2 + j) != '\0')
		{
			str[i] = s2[j];
			i++;
			j++;
		}
	}
	return (str);
}

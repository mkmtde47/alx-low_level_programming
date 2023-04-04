#include "main.h"

/**
  * argstostr - A function that returns apointer to a concat string
  * @ac: Arg count
  * @av: Pointer to an array of pointers
  * Return: Concat string or NULL
  */
char *argstostr(int ac, char **av)
{
	int i;
	char *str = NULL;

	i = 0;
	if (ac == 0 || *av == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < ac)
		{
			str = str_concat(str, av[i]);
			str = str_concat(str, "\n");
			i++;
		}
	}
	return (str);
}

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
	int len;
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
	len = strlen(s1) + strlen(s2);
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

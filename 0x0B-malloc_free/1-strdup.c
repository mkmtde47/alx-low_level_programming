#include "main.h"

/**
  * _strdup - Function that returns a pointer to a copy of a string
  * @str: String to be coppied
  * Return: Pointer if successful (copy), Null if not successful
  */
char *_strdup(char *str)
{
	char *newstr;
	int i;
	int len = strlen(str);

	newstr = malloc(sizeof(char) * len);

	if (NULL || newstr == NULL || str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			newstr[i] = str[i];
		}
	}
	return (newstr);
}

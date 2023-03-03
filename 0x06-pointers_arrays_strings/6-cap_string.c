#include "main.h"

/**
  * cap_string - Pointer to function that converts lowercase to upper
  * @str: String (lowercase)
  * Return: str
  */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == ' ' ||
			*(str + i) == '\t' ||
			*(str + i) == '\n' ||
			*(str + i) == ',' ||
			*(str + i) == ';' ||
			*(str + i) == '.' ||
			*(str + i) == '!' ||
			*(str + i) == '?' ||
			*(str + i) == '"' ||
			*(str + i) == '(' ||
			*(str + i) == ')' ||
			*(str + i) == '{' ||
			*(str + i) == '}')
		{
			i++;
			if ((*(str + i) >= 'a') && (*(str + i) <= 'z'))
			{
				*(str + i) = *(str + i) - 32;
			}
			i--;
		}
		i++;
	}
	return (str);
}

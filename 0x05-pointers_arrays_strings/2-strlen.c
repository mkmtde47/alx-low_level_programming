#include "main.h"

/**
  * _strlen - Findsthe strings length
  * @s: Pointer containg string
  * Return: strln value
  */
int _strlen(char *s)
{
	int strln;
	int i;

	i = 0;
	strln = 0;
	while (*(s + i) != '\0')
	{
		if ((*s - 1) || (*s == '\0')) 
		{
			strln = 0;
			break;
		}
		strln = i + 1;
		i++;
	}

	return (strln);
}

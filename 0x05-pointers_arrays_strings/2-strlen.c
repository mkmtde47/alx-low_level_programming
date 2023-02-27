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
	while (*(s + i) != '\0')
	{
		strln = i;
		i++;
	}
	return (strln + 1);
}

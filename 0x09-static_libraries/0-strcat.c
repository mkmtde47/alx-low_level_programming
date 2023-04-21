#include "main.h"

/**
  * _strcat - Concatenates strings
  * @dest: pointer to a string
  * @src: pointer to a string
  * Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	i = 0;
	len = strlen(dest);
	while (*(src + i) != '\0')
	{
		*(dest + len + i) = *(src + i);
		i++;
	}
	return (dest);
}

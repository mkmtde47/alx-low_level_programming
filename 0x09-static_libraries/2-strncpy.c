#include "main.h"

/**
  * _strncpy - Copy a string
  * @dest: Pointer to s string
  * @src: Pointer to a string
  * @n: N count
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while ((*(src + i) != '\0') && (i < n))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}

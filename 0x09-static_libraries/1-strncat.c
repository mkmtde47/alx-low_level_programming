#include "main.h"

/**
  * _strncat - Concatenates strings where src is n
  * @dest: pointer to a string
  * @src: pointer to a string
  * @n: n count
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;

	i = 0;
	len = strlen(dest);
	while ((*(src + i) != '\0') && (i < n))
	{
		*(dest + len + i) = *(src + i);
		i++;
	}
	return (dest);
}

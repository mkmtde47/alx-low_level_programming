#include "main.h"
#include <string.h>

/**
  * _strcpy - Copies string from one place to another (memory)
  * @dest: Destination of string
  * @src: Source of string
  * Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);
	int i;

	for (i = 0; i < len + 1; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

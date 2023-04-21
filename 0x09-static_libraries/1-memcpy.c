#include "main.h"

/**
  * _memcpy - copies memory area.
  * @dest: Pointer to memory
  * @src: Char to fill memory
  * @n: size in memory to fill
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

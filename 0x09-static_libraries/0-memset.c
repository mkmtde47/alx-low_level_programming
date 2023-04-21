#include "main.h"

/**
  * _memset - Fills memory with a const char
  * @s: Pointer to memory
  * @b: Char byte to fill memory
  * @n: size in memory to fill
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

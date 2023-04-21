#include "main.h"

/**
  * _strlen_recursion - Returns length of a string
  * @s: Pointer to a string
  * Return: i as the string length
  */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*(s) != '\0')
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	return (i);
}

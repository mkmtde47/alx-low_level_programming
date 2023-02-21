#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  *
  * Return: Zero if successful
  */
int main(void)
{
	char var[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int n;

	n = 0;
	while (var[n] != EOF)
	{
		_putchar(var[n]);
	}
	return (0);
}

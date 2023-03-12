#include <stdio.h>

/**
  * main - function prints argc, entry point
  * @argc: Unused variables
  * @argv: Pointer to a pointer of arrays
  * Return: Zero if successful
  */
int main(int argc, char __attribute__ ((unused)) **argv)
{
	if (argc > 0)
	{
		printf("%d", argc);
		printf("\n");
	}
	return (0);
}

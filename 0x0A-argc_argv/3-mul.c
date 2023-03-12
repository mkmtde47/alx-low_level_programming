#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * main - Main function multiplies two numbers
  * @argc: Argument count
  * @argv: Pointers to strings
  * Return: Zero if successful
  */
int main(int argc, char **argv)
{
	int prod;

	prod = 0;
	if (argc > 0 && argc - 1 == 2)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", prod);
		printf("\n");
	}
	else
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	return (0);
}

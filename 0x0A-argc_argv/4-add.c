#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - Main function adds two numbers
  * @argc: Argument count
  * @argv: Pointers to strings
  * Return: Zero if successful
  */
int main(int argc, char **argv)
{
	int sum;
	int i;

	sum = 0;
	i = 1;
	if (argc > 0)
	{
		while (i < argc)
		{
			if (isdigit(*argv[i]))
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error");
				printf("\n");
				return (1);
			}
			i++;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}

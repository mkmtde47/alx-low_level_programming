#include <stdio.h>
#include <string.h>

/**
  * main - Main function
  * @argc: Argument count
  * @argv: Pointers to strings
  * Return: Zero if successful
  */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s", argv[i]);
			printf("\n");
			i++;
		}
	}
	return (0);
}

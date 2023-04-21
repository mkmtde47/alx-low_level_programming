#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - Main function finds number of coins for change
  * @argc: Argument count
  * @argv: Pointers to strings
  * Return: Number of coins if successful, 1 if not
  */
int main(int argc, char **argv)
{
	unsigned long int coins;
	int rem;
	int cents[] = {25, 10, 5, 2, 1};

	coins = 0;
	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
			return (0);
		}
		if (*argv[1] >= 0)
		{
			coins = atoi(argv[1]) / cents[0];
			if (atoi(argv[1]) % cents[0] != 0)
			{
				rem = atoi(argv[1]) % cents[0];
				coins = coins + rem / cents[1];
				if (atoi(argv[1]) % cents[1] != 0)
				{
					rem = atoi(argv[1]) % cents[1];
					coins = coins + rem / cents[2];
					if (atoi(argv[1]) % cents[2] != 0)
					{
						rem = atoi(argv[1]) % cents[2];
						coins = coins + rem / cents[3];
						if (atoi(argv[1]) % cents[3] != 0)
						{
							rem = atoi(argv[1]) % cents[3];
							coins = coins + rem / cents[4];
						}
					}
				}
			}
		}
		else
		{
			printf("0\n");
			return (0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%lu", coins);
	printf("\n");
	return (0);
}

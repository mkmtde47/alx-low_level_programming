#include "3-calc.h"

/**
  * main - Entry point
  * @argc: Counter
  * @argv: Array
  * Return: Zero if successful
  */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int answer;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if (num1 && num2)
		{
			answer = get_op_func(argv[2])(num1, num2);
			if (answer > -1)
			{
				/*answer = get_op_func(argv[2])(num1, num2);*/
				printf("%d", answer);
				printf("\n");
			}
			else
			{
				printf("Error");
			}
		}
	}
	return (0);
}

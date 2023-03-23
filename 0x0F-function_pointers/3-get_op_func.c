#include "3-calc.h"

/**
  * get_op_func - Pointer to a function
  * @s: Pointer to char
  * @: Integer
  * @: Interger
  * Return: Integer if successful
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	/*while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}*/
	while (*(ops[i].op) != *s)
	{
		if (ops[i].op == NULL || ops[i].f == NULL)
		{
			printf("Error");
			return (NULL);
		}
		i++;
	}

	return (ops[i].f);
}

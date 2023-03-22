#include "function_pointers.h"

/**
  * print_name - Function that prints name
  * @name: Pointer to a string
  * @f: Pointer to a function
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}

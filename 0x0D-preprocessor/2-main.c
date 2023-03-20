#include "main.h"

int main(void)
{
	int i;

	i = 0;
	while (__FILE__ != '\0')
	{
		_putchar(__FILE__ + i);
		i++;
	}
	return (0);
}

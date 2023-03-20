#include "main.h"

int main(void)
{
	int i;

	i = 0;
	while (*(__FILE__ + i) != '\0')
	{
		_putchar(*(__FILE__ + i));
		i++;
	}
	_putchar('\n');
	return (0);
}

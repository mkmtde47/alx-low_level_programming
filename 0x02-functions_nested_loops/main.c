#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f'
                 , 'g', 'h', 'i', 'j', 'k', 'l', 'm'
                         , 'n', 'o', 'q', 'r', 's'
                         , 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int n;

	n = 0;
	for (n = 0; n < 26; n++)
	{
		_putchar(alpha[n]);
	}
	_putchar('\n');
	return (0);
}

#include "main.h"

/**
 * read_textfile - A function that reads and prints a .txt file
 * @filename: Pointer to a string.
 * @letters: Unsigned int, number of letters read
 * Return: Count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	unsigned int count;
	char letter;

	count = 0;
	fp = fopen(filename, "r");
	if (fp == NULL || filename == NULL)
	{
		return (0);
	}

	while (!feof(fp))
	{
		letter = fgetc(fp);
		if (letter == '\0')
		{
			break;
		}
		if (count > letters - 1)
		{
			return (count);
		}
		_putchar(letter);
		count++;
	}
	if (count != letters)
	{
		return (0);
	}
	_putchar('\n');
	fclose(fp);
	return (count);
}

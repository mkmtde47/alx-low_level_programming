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
	while ((letter = fgetc(fp)) != EOF)
	{
		/*letter = fgetc(fp);*/
		if (count == letters)
		{
			break;
		}
		_putchar(letter);
		count++;
	}
	if (count != letters)
	{
		return (0);
	}
	fclose(fp);
	return (count);
}

#include "main.h"

/**
 * append_text_to_file - A function that append a file
 * @filename: Pointer toa string
 * @text_content: Pointer to a string
 * Return: 1 if successful else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int w;

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1 || filename == NULL)
	{
		return (-1);
	}
	if (text_content)
	{
		w = write(fp, text_content, strlen(text_content));
	}
	if (w == -1 || fp == -1)
	{
		return (-1);
	}
	return (1);
}

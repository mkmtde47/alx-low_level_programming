#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: Pointer to a string
 * @text_content: Pointer to a string
 * Return: 1 if successfull else -1
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;

	fp = fopen(filename, "w+");
	if (fp == NULL || filename == NULL)
	{
		return (-1);
	}
	fprintf(fp, "%s", text_content);
	if (text_content == NULL)
	{
		fprintf(fp, " ");
	}
	fclose(fp);
	return (1);
}

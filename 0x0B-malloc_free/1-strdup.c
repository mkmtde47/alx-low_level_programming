#include "main.h"

char *_strdup(char *str)
{
	char *newstr;
	int len = strlen(str);

	newstr = malloc(sizeof(char) * len);

	if (newstr == NULL || len == 0)
	{
		return (NULL);
	}
	else
	{
		newstr = str;
	}
	return (newstr);
}

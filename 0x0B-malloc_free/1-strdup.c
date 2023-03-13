#include "main.h"

char *_strdup(char *str)
{
	char *newstr;
	int i;
	int len = strlen(str);

	newstr = malloc(sizeof(char) * len);

	if (newstr == NULL || len == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			newstr[i] = str[i];
		}
	}
	return (newstr);
}

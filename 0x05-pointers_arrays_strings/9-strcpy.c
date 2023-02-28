#include "main.h"
#include <string.h>

char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);
	int i;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

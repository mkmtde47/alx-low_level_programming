#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	i = 0;
	len = strlen(src);
	while (*(src + i) != '\0')
	{
		*(dest + len + i) = *(src + i);
		i++;
	}
	return (dest);
}

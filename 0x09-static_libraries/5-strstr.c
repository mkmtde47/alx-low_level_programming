#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int len = strlen(needle);
	int i;

	i = 0;
	while (i < len)
	{
		if ( *needle == *(haystack + i))
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}

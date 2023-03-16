#include "main.h"

/**
  * _calloc - Function that allocates array memory
  * @nmemb: size of array.
  * @size: size of type
  * Return: pointer to string if successful, Null if inseccesful
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(size * nmemb);
		if (str == NULL)
		{
			free(str);
			return (NULL);
		}
		else
		{
			for (i = 0; i <= nmemb; i++)
			{
				str[i] = 0;
			}
		}
	}
	return (str);
}

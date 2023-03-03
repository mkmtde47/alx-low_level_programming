#include "main.h"

char *leet(char *str)
{
	int i;
	int j;
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char index[] = "43071";

	i = 0;
	while (*(str + i) != '\n')
	{
		j = 0;
		while (j < 6)
		{
			if (*(str + i) == lower[j] || *(str + i) == upper[j])
			{
				*(str + i) = index[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}

#include "lists.h"

/**
  * print_list - A function that prints elements of a linked list
  * @h: Pointer to a 
  * Return: size of list
  */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			printf("\n");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
			printf("\n");
		}
		h = h->next;
		i++;
	}
	return i;
}

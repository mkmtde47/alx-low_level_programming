#include "lists.h"

/**
  * list_len - A function that prints elements of a linked list
  * @h: Pointer to a node
  * Return: size of list
  */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

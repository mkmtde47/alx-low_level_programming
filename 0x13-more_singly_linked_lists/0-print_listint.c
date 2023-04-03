#include "lists.h"

/**
 * print_listint - A function that prints elements of a linked list
 * @h: Pointer to a node
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}
	return (count);
}

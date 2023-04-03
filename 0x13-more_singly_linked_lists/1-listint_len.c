#include "lists.h"

/**
 * listint_len - A function that prints elements of a linked list
 * @h: Pointer to a node
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

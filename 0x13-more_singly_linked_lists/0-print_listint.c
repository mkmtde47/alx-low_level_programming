#include "lists.h"

/**
 * print_listint - A function that prints elements of a linked list
 * @h: Pointer to a node
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *current = h;

	count = 0;
	if (h != NULL)
	{
		while (current != NULL)
		{
			printf("%d\n", current->n);
			current = current->next;
			count++;
		}
	}
	else
	{
		/*printf("(nil)\n");*/
		return (0);
	}
	return (count);
}

#include "lists.h"

/**
 * free_listint - A function that frees memory
 * @head: Pointer to a node
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

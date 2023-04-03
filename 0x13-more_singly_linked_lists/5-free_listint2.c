#include "lists.h"

/**
 * free_listint2 - A function that frees memory
 * @head: Pointer to a node
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
	*head = NULL;
}

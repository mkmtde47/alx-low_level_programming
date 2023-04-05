#include "lists.h"

/**
 * free_listint2 - A function that frees memory
 * @head: Pointer to a node
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp = *head;

	while (temp != NULL)
	{
		current = temp->next;
		free(temp);
		temp = current;
	}
	*head = NULL;
}

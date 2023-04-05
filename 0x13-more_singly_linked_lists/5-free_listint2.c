#include "lists.h"

/**
 * free_listint2 - A function that frees memory
 * @head: Pointer to a node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}

#include "lists.h"

/**
 * free_listint2 - A function that frees memory
 * @head: Pointer to a node
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;
	
	temp = *head;
	/*temp = temp->next;*/
	*head = NULL;
	while (temp != NULL)
	{
		current = temp;
		temp = current->next;
		free(current);
	}
	/*head = NULL;*/
}

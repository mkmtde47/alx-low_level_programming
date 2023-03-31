#include "lists.h"

/**
  * free_list - A function that frees memory
  * @head: Pointer to a node
  */
void free_list(list_t *head)
{
	list_t *current;

	current = head;
	while (current != NULL)
	{
		current = current->next;
		free(head);
		head = current;
	}
}

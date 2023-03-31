#include "lists.h"

/**
  * free_list - A function that frees memory
  * @head: Pointer to a node
  */
void free_list(list_t *head)
{
	list_t *current;

/*	current = head;*/
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

#include "lists.h"

/**
  * add_node_end - Function that returns a pointer to a node
  * @head: Pointer to a node
  * @str: Pointer to a string
  * Return: Address of new element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;

	/*head = NULL;*/
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
	}
	current->next = new;

	return (new);
}

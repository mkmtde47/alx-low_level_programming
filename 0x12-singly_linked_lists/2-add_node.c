#include "lists.h"

/**
  * add_node - Function that returns a pointer to a node
  * @head: Pointer to a node
  * @str: Pointer to a string
  * Return: Address of new element
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	/*head = NULL;*/
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}

#include "lists.h"

/**
 * add_nodeint_end - Function that returns a pointer to a node
 * @head: Pointer to a node
 * @n: Integer
 * Return: Address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	new->n = n;
	new->next = NULL;
	current->next = new;
	return (new);
}

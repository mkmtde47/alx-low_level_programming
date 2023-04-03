#include "lists.h"

/**
  * pop_listint - Function that removes a node
  * @head: Pointer to a pointer
  * Return: Value of removed node or else 0
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}

#include "lists.h"

/**
  * get_nodeint_at_index - A function that gets the nth node
  * @head: Pointer to a node
  * @index: index of list
  * Return: nth node else null
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count;

	count = 1;
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		current = head;
		while (current != NULL && count < index + 1)
		{
			current = current->next;
			if (count == index)
			{
				return (current);
			}
			count++;
		}
		return (NULL);
	}
}

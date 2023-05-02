#include "lists.h"

/**
 * delete_nodeint_at_index - A function that adds the nth node at n
 * @head: Pointer to a pointer
 * @index: index of list
 * Return: 1 if successful, 0 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int count;

	count = 0;
	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}
	else
	{
		current = *head;
		while (current != NULL && count < index)
		{
			if (count == index - 1)
			{
				temp = current->next;
				current->next = current->next->next;
				free(temp);
				return (1);
			}
			current = current->next;
			count++;
		}
		return (-1);
	}
}

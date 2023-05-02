#include "lists.h"

/**
 * insert_nodeint_at_index - A function that adds the nth node at n
 * @head: Pointer to a pointer
 * @idx: index of list
 * @n: Value of int
 * Return: nth node else null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new;
	unsigned int count;

	count = 0;
	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		current = *head;
		while (current != NULL && count <= idx)
		{
			if (count == idx - 1)
			{
				new = malloc(sizeof(listint_t));
				if (new == NULL)
				{
					free(new);
					return (NULL);
				}
				new->n = n;
				new->next = current->next;
				current->next = new;
				return (new);
			}
			current = current->next;
			count++;
		}
		return (NULL);
	}
}

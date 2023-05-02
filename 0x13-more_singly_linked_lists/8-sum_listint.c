#include "lists.h"

/**
 * sum_listint - A function that sums all numbers innodes
 * @head: Pointer to a list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		current = head;
		while (current != NULL)
		{
			sum = sum + current->n;
			current = current->next;
		}
	}
	return (sum);
}

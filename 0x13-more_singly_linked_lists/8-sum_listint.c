#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: node
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *t = head;

	sum = 0;

	while (t)
	{
		sum += t->n;
		t = t->next;
 	}

	return (sum);
}

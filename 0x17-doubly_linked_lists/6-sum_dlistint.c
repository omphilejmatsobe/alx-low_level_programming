#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data of a linked list
 *
 * @head: input linked list
 * Return: sum of the linked list data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

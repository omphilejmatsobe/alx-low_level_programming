#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to list
 *
 * Return: num
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int num;

	if ((head == NULL) || (*head == NULL))
		return (0);

	num = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (num);
}

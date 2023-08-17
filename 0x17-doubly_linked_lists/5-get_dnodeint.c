#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 *
 * @head: input list
 * @index: input int argument
 * Return: node at nth index of a linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

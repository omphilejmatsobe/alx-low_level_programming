#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to node 
 *
 * Return: the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t x;
 	int dif;
 	listint_t *rev;

	x = 0;

	if (*h == 0)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = rev;
			x++;
		}
		else
		{
			free(*h);	
		      	*h = NULL;
			x++;
			break;
		}
	}
	*h = NULL;
	return (x);
}

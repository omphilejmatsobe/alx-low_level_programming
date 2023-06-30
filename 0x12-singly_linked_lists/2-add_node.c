#include "lists.h"

/**
 ** add_node - Adds a new node to a list
 * @head: Head
 * @str: The new value for the node
 *
 * Return: Address
 **/
list_t *add_node(list_t **head, const char *str)
{
	int x;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	for (x = 0; str[x] != 0; x++)
		;

	new->str = malloc(x + 1);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = x;
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (new);
}

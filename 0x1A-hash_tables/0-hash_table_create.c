#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table.
 * @size: the size in nodes for the hash table.
 *
 * Return: a pointer the hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *p = malloc(sizeof(hash_table_t));

	if (p == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	p->size = size;
	p->array = malloc(sizeof(hash_node_t *) * size);
	if (p->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	for (; i < size; i++)
		p->array[i] = NULL;

	return (p);
}

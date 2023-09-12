#include "hash_tables.h"

/**
 * hash_table_set - set a value in hash table
 * @ht: input hash table.
 * @key: key to be index.
 * @value: value to set in the hash table.
 *
 * Return: 1 if succeful, 0 if not.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node0, *node1;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node1 = malloc(sizeof(hash_node_t));
	if (node1 == NULL)
		return (0);
	node1->key = strdup((char *)key);
	node1->value = strdup((char *)value);
	node1->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = node1;
	else
	{
		node0 = ht->array[index];
		if (strcmp(node0->key, key) == 0)
		{
			node1->next = node0->next;
			ht->array[index] = node1;
			_node(node0);
			return (1);
		}
		while (node0->next != NULL && strcmp(node0->next->key, key) != 0)
		{ node0 = node0->next;
		}
		if (strcmp(node0->key, key) == 0)
		{
			node1->next = node0->next->next;
			_node(node0->next);
			node0->next = node0;
		}
		else
		{
			node1->next = ht->array[index];
			ht->array[index] = node1;
		}
	}
	return (1);
}

/**
 * _node - Free a node.
 * @node: Node to free.
 *
 * Return: Void.
 */
void _node(hash_node_t *node)
{
        free(node->key);
        free(node->value);
        free(node);
}

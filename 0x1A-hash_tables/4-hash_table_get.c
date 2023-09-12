#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: a pointer to the hash table array.
 * @key: the key, a string that cannot be empty.
 *
 *
 * Return: the value associated with the key, or NULL if key can't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *n;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	if (ht->array[i] == NULL)
		return (NULL);
	if (strcmp(ht->array[i]->key, key) == 0)
		return (ht->array[i]->value);
	n = ht->array[i];

	while (n != NULL)
	{
		if (strcmp(n->key, key) == 0)
			return (n->value);
		n = n->next;
	}
	return (NULL);
}

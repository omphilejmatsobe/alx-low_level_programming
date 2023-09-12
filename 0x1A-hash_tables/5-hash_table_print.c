#include "hash_tables.h"

/**
 * hash_table_print - prints key-value pairs in hash tables
 * @ht: input hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0;
	hash_node_t *n;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			n = ht->array[i];
			while (n != NULL)
			{
				if (count > 0)
					printf(", ");
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				count++;
			}
		}
	}

	printf("}\n");
}

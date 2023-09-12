#include "hash_tables.h"

/**
 * hash_djb2 - takes a string and turns it into a hash number
 * @str: the string, a constant value unrepeated in the hash table
 *
 * Return: The hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int ht;
	int st;

	ht = 5381;

	while ((st = *str++))
	{
		ht = ((ht << 5) + ht) + st;
	}

	return (ht);
}

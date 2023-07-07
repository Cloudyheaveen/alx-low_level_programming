#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: The size of the array
 * Return: A pointer to the newly created hash table,
 * NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_created;
	unsigned long int x;

	hash_table_created = malloc(sizeof(hash_table_t));

	if (hash_table_created == NULL)
		return (NULL);

	hash_table_created->size = size;
	hash_table_created->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table_created->array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		hash_table_created->array[x] = NULL;
	}

	return (hash_table_created);
}

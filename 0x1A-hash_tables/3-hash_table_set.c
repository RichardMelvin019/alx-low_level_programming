#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_1;
	char *value_copy_string;
	unsigned long int index, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy_string = strdup(value);
	if (value_copy_string == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (x = index; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = value_copy_string;
			return (1);
		}
	}

	new_1 = malloc(sizeof(hash_node_t));
	if (new_1 == NULL)
	{
		free(value_copy_string);
		return (0);
	}
	new_1->key = strdup(key);
	if (new_1->key == NULL)
	{
		free(new_1);
		return (0);
	}
	new_1->value = value_copy_string;
	new_1->next = ht->array[index];
	ht->array[index] = new_1;

	return (1);
}

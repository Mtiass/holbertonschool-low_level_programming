#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht:hash table to add or update the key/value to.
 * @key:is the key. key can not be an empty string.
 * @value:is the value associated with the key. value must be duplicated.
 * Value can be an empty string.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newhn = malloc(sizeof(hash_node_t));
	unsigned long int i;

	if (newhn == NULL || ht == NULL)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	newhn->key = strdup(key);
	newhn->value = strdup(value);
	if (newhn->key == NULL || newhn->value == NULL)
	{
		free(newhn);
		return (0);
	}
	newhn->next = ht->array[i];
	ht->array[i] = newhn;
	return (1);
}

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
	hash_node_t *newhn, *actnod;
	unsigned long int i;

	if (ht == NULL)
		return (0);
	i = key_index((unsigned char *)key, ht->size);

	actnod = ht->array[i];
	while (actnod != NULL)
	{
		if (strcmp(key, actnod->key) == 0)
		{
			free(actnod->value);
			actnod->value = strdup(value);
			return (1);
		}
		actnod = actnod->next;
	}

	newhn = malloc(sizeof(hash_node_t));
	if (newhn == NULL)
	{
		free(newhn);
		return (0);
	}
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

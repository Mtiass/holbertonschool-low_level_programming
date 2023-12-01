#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht:is the hash table you want to look into.
 * @key:is the key you are looking for.
 * Return:the value associated with the element, or NULL
 * if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *acnode;

	i = key_index((unsigned char *)key, ht->size);
	acnode = ht->array[i];

	while (acnode != NULL)
	{
		if (strcmp(acnode->key, key) == 0)
			return (acnode->value);
		acnode = acnode->next;
	}
	return (NULL);
}

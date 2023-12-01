#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table to be deleted.
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *actnod, *frnod;

	for (; i < ht->size; i++)
	{
		actnod = ht->array[i];
		while (actnod != NULL)
		{
			frnod = actnod;
			actnod = actnod->next;
			free(frnod->key);
			free(frnod->value);
			free(frnod);
		}
	}
	free(ht->array);
	free(ht);
}

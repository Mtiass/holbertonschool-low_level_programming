#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: is the size of the array.
 * Return:Returns a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int con;
	hash_table_t *ntab = malloc(sizeof(hash_table_t));

	if (ntab == NULL)
	{
		free(ntab);
		return (NULL);
	}
	ntab->size = size;
	ntab->array = malloc(sizeof(hash_table_t *) * size);
	if (ntab->array == NULL)
	{
		free(ntab);
		return (NULL);
	}
	for (con = 0; con < size; con++)
		ntab->array[con] = NULL;
	return (ntab);
}

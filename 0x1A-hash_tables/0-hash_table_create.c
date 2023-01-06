#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long i = 0;
	hash_table_t *table;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	
	if (!table)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = malloc(table->size * sizeof(table->array));

	if (!(table->array))
	{
		free(table->array);
		return (NULL);
	}

	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}

	return (table);
}

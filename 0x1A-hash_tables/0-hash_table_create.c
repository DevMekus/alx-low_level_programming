#include "hash_tables.h"

/**
 * hash_table_create - Function that Creates a hash table.
 * @size: Array Size.
 *
 * Return: On error return - NULL.
 *         Else - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int index;
    hash_table_t *hashTable = malloc(sizeof(hash_table_t));

    if (hashTable == NULL)
        return (NULL);

    hashTable->size = size;
    hashTable->array = malloc(sizeof(hash_node_t *) * size);
    if (hashTable->array == NULL)
        return (NULL);
    for (index = 0; index < size; index++)
        hashTable->array[index] = NULL;

    return (hashTable);
}

#include "hash_tables.h"

/**
 * hash_table_get - gets  the value associated a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: cannot be matched - NULL.
 *         Else - the value associated.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *newnode;
    unsigned long int array_index;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    array_index = key_index((const unsigned char *)key, ht->size);
    if (array_index >= ht->size)
        return (NULL);

    newnode = ht->array[array_index];
    while (newnode && strcmp(newnode->key, key) != 0)
        newnode = newnode->next;

    return ((newnode == NULL) ? NULL : newnode->value);
}

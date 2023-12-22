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
    hash_node_t *newNode;
    char *_value;
    unsigned long int xdex, i;

    if (key == NULL || ht == NULL)
        return (0);
    if (*key == '\0' || value == NULL)
        return (0);

    _value = strdup(value);
    if (_value == NULL)
        return (0);

    xdex = key_index((const unsigned char *)key, ht->size);
    for (i = xdex; ht->array[i]; i++)
    {
        if (strcmp(ht->array[i]->key, key) == 0)
        {
            free(ht->array[i]->value);
            ht->array[i]->value = _value;
            return (1);
        }
    }

    newNode = malloc(sizeof(hash_node_t));
    if (newNode == NULL)
    {
        free(_value);
        return (0);
    }
    newNode->key = strdup(key);
    if (newNode->key == NULL)
    {
        free(newNode);
        return (0);
    }
    newNode->value = _value;
    newNode->next = ht->array[xdex];
    ht->array[xdex] = newNode;

    return (1);
}

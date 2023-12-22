#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in their order
 */
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *newNode;
    unsigned long int i;
    unsigned char flag = 0;

    if (ht == NULL)
        return;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            if (flag == 1)
                printf(", ");

            newNode = ht->array[i];
            while (newNode != NULL)
            {
                printf("'%s': '%s'", newNode->key, newNode->value);
                newNode = newNode->next;
                if (newNode != NULL)
                    printf(", ");
            }
            flag = 1;
        }
    }
    printf("}\n");
}

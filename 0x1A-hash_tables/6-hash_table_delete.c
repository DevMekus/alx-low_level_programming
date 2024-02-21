#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: hash table pointer.
 */

void hash_table_delete(hash_table_t *ht)
{

    	hash_table_t *start_point = ht;
    	hash_node_t *newNode, *temp;
    	unsigned long int i;

    	for (i = 0; i < ht->size; i++)
    	{
        	if (ht->array[i] != NULL)
        	{
            		newNode = ht->array[i];
            		while (newNode != NULL)
            		{
                		temp = newNode->next;
                		free(newNode->key);
                		free(newNode->value);
                		free(newNode);
               	 		newNode = temp;
            		}
        	}
    	}
    	free(start_point->array);
    	free(start_point);
}

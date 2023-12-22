#include "hash_tables.h"

/**
 * hash_djb2 - implementing the djb2 algorithm.
 * @str: string to hash.
 *
 * Return: hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash_int;
    int index;

    hash_int = 5381;
    while ((index = *str++))
        hash_int = ((hash_int << 5) + hash_int) + index; /* hash * 33 + c */

    return (hash_int);
}

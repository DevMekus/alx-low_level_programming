#include "main.h"
/**
 * _memset - used to fill a block of memory with a particular value.
 * @s: starting address of the memory
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: Pointer to the filled memory
 */

char *_memset(char *s, char b, unsigned int n) 
{
    char *originalS = s;

    while (n > 0) 
    {
        *s = b;
        s++;
        n--;
    }

    return originalS;
}

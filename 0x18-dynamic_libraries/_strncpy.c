#include "main.h"
/**
 * _strncpy - function returns the pointer to the copied string.
 * @dest: pointer to the string
 * @src: pointer to the source
 * @n: integer
 * Result: pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n) 
{
    char *originalDest = dest;

    while (*src != '\0' && n > 0) 
    {
        *dest++ = *src++;
        n--;
    }

    while (n > 0) 
    {
        *dest++ = '\0';
        n--;
    }

    return originalDest;
}

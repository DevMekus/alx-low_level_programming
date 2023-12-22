#include "main.h"
/**
 * _strncat - concatenates the destination string and the source string
 * @dest: dest
 * @src: source
 * @n: integer
 * Result: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n) 
{
    char *originalDest = dest;

    
    while (*dest != '\0') 
    {
        dest++;
    }

    
    while (*src != '\0' && n > 0) 
    {
        *dest++ = *src++;
        n--;
    }

    *dest = '\0';

    return originalDest;
}

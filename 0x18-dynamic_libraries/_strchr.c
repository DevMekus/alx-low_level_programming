#include "main.h"
/**
 * _strchr - returns a pointer to the first occurrence of the character
 * @s: character to be scanned
 * @c: character to be searched in
 */

char *_strchr(char *s, char c) 
{
    while (*s != '\0') 
    {
        if (*s == c) 
	{
            return (char *)s;
        }
        s++;
    }

    return NULL;
}

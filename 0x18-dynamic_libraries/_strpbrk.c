#include "main.h"
/**
 * _strpbrk - finds the first character in the string s1 that match
 * @s: This is the C string to be scanned.
 * @accept:string containing the characters to match.
 * Return: pointer to the character in str1 that match
 */

char *_strpbrk(char *s, char *accept) 
{
    while (*s != '\0') 
    {
        if (strchr(accept, *s) != NULL) 
	{
            return (char *)s;
        }
        s++;
    }

    return NULL;
}

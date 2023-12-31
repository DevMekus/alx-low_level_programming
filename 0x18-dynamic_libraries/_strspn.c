#include "main.h"
/**
 * _strspn -  returns the number of characters in the initial segment of str1
 * @s: the main C string to be scanned
 * @accept: This is the string containing the list of characters
 * Return: number of characters in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept) 
{
    int count = 0;

    while (*s != '\0' && strchr(accept, *s) != NULL) 
    {
        count++;
        s++;
    }

    return count;
}

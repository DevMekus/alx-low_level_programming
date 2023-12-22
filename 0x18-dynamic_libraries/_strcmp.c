#include "main.h"
/**
 * _strcmp - compares two strings character by character
 * @s1: string one to compare
 * @s2: string two to compare
 * Return: 0 if true
 */

int _strcmp(char *s1, char *s2) 
{
    while (*s1 != '\0' && *s2 != '\0') 
    {
        if (*s1 != *s2) 
	{
            return (*s1 - *s2);
        }
        s1++;
        s2++;
    }

    return (*s1 - *s2);
}

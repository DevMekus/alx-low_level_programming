#include "main.h"
/**
 * _strstr -  function used for string matching.
 * @haystack: the main C string to be scanned.
 * @needle: small string to be searched with-in haystack string
 * Return: pointer to the first occurrence in haystack
 */

char *_strstr(char *haystack, char *needle) 
{
    while (*haystack != '\0') 
    {
        const char *haystackPtr = haystack;
        const char *needlePtr = needle;

        while (*needlePtr != '\0' && *haystackPtr == *needlePtr) 
	{
            haystackPtr++;
            needlePtr++;
        }

        if (*needlePtr == '\0') 
	{
            return (char *)haystack;
        }

        haystack++;
    }

    return NULL;
}

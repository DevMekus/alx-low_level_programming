#include "main.h"
/**
 * _strcat - concatenates the destination string and the source string
 * @dest: destination
 * @src: File source 
 * Return: a destination string
 */

char *_strcat(char *dest, char *src) {
    char *originalDest = dest;

    /** Move dest to the end of the string**/
    while (*dest != '\0') {
        dest++;
    }

    while ((*dest++ = *src++) != '\0');

    return originalDest;
}

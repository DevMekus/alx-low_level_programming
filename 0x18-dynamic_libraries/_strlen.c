#include "main.h"
/**
 *  _strlen - Checks the length of a string
 *  @s: pointer to the string to check
 *  Return: the length of the string
 */
int _strlen(char *s) {
    size_t length = 0;

    while (*s != '\0') {
        length++;
        s++;
    }

    return length;
}

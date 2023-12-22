#include "main.h"
/**
 * _atoi - returns the converted integral number as an int value.
 * @s: string to convert
 * Return: converted integer
 */
int _atoi(char *s) {
    int result = 0;
    int sign = 1;

    /** Handle leading whitespace**/
    while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
        s++;

    /** Handle optional sign**/
    if (*s == '-' || *s == '+') {
        sign = (*s == '-') ? -1 : 1;
        s++;
    }

    /** Convert digits to integer**/
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}

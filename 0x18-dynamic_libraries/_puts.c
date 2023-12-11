#include "main.h"
/**
 * _puts - Displays outpt on the standard output
 */
void _puts(char *s) {
    while (*s != '\0') {
       _putchar(*s);
        s++;
    }
   _putchar('\n');
}

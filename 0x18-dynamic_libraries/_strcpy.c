#include "main.h"
/**
 * _strcpy - function to copy a string into a dest
 * @dest: Destination of the content
 * @src: Source to be copied
 * Return: pointer to the dest.
 */

char *_strcpy(char *dest, char *src)
{
	while((*dest++ == *src++) != '\0');
	return (*dest);
}

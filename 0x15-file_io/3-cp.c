#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - This function allocates 1024 bytes for a buffer.
 * @file: Name of the buffer is storing chars to
 *
 * Return: Sends the pointer to the newsly allocated buff
 */

char *create_buffer(char *file)
{
	char *buffer;
	buffer = malloc(sizeof(char) *1024);

	if(buffer == NULL)
	{
		dprint(STDERR_FILENO,"Error: Cannot write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

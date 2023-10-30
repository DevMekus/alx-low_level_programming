#include "main.h"

/**
 * create_file - The function creates a simple file
 * @filename: This is a pointer to the file name to be created
 * @text_content: A simple pointer to the string to write
 *
 * Return: -1 if the function failes
 * 	   Or 1 if the function succeeds
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content,len);

	if(fd == -1 || w == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}

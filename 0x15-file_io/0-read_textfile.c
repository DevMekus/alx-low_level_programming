#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - This function will Read the textfile presented to the stdout
 * @filename: this is the text file to be read
 * @letters: The number of letters in the file to be read
 * Return: 0 when function failes  or filename is Null
 * 		W when actual number of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if(fd == -1)
	{
		return (0);
	} else {
		buff = malloc(sizeof(char) * letters);
		t = read(fd, buff, letters);
		w = write(STDOUT_FILENO, buff, t);

		free(buff);
		close(fd);
		return (w);
	}
}

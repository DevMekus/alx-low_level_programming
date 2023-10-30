#include "main.h"

/**
 * append_text_to_file -  This function will append text to the end of a file
 * @filename: Namd of the file hown by a pointer
 * @text_content: String to be added to the end of the file
 *
 * Return: -1 if the filename is NULL, 1 if successful
 */
int append_text_to_file(const char*filename, char*text_content)
{
	int o, w;
	int len = 0;

	if(filename == NULL)
	{
		return (-1);
	}

	if(text_content != NULL)
	{
		for(len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if(o == -1 || w == -1)
		return(-1);
	close(o);
	return(1);
}

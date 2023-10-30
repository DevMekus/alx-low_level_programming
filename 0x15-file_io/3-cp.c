#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* create_buffer - This function allocates 1024 bytes for a buffer
* @file: Name of the buffer is storing chars to
*
* Return: Sends the pointer to the newly allocated buffer
*/

char *create_buffer(char *file)
{
    char *buffer;
    buffer = malloc(sizeof(char) * 1024);
    if(buffer == NULL)
    {
        dprintf(STDERR_FILENO,"Error: Cannot writ to %s",file);
        exit(99);
    }
    return (buffer);
}

/**
* close_file - This will close files descriptors immediately called
* @fd: This is the file descriptor we will be closing
*/

void close_file(int fd)
{
    int c;
    c = close(fd);

    if(c == -1)
    {
        dprintf(STDERR_FILENO,"Error: Cannot close file %d\n",fd);
        exit(100);
    }
}

/**
* main - This will copy the file content to another file
* @ardc: This is the number of argument supplied
* @argv: This is the array of pointers to the arguments supplied
*
* Return: This returns 0 on success
*
*Description: Simple description of the file goes here
*/

int main(int argc, char*argv[])
{
    int from;
    int to, r, w;
    char *buffer;

    if(argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    buffer = create_buffer(argv[2]);
    from = open(argv[1], O_RDONLY);
    r = read(from, buffer, 1024);
    to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

    do{
        if(from == -1 || r == -1)
        {
            dprintf(STDERR_FILENO,"Error: Cannot read from file %s\n", argv[1]);
            free(buffer);
            exit(98);
        }
        w = write(to, buffer, r);
        if(to == -1 || w == -1){
            dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argv[2]);
            free(buffer);
            exit(99);
        }
        r = read(from, buffer, 1024);
        to = open(argv[2], O_WRONLY | O_APPEND);
    }while(r > 0);

    free(buffer);
    close_file(from);
    close_file(to);
    return (0);
}

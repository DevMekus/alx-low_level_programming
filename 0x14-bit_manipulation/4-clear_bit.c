#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - The function / program will  sets the value of a bit to 0 at a given index
 * @n: the param of the program to set
 * @index: index
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

#include "main.h"

/**
 * flip_bits - This function will counts the number of bits to change
 * to get from one number to another
 * @n: first number to count
 * @m: second number to count
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbt = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countbt++;
	}

	return (countbt);
}

#include <stdlib.h>
#include "lists.h"

/**
 * list_len - This returns the number of elements in a linked list
 * @j: pointer to the list_t list element
 *
 * Return: number of elements in j
 */
size_t list_len(const list_t *j)
{
	size_t n = 0;

	while (j)
	{
		n++;
		j = j->next;
	}
	return (n);
}

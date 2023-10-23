#include "lists.h"

/**
 * listint_len - This returns the number of elements in a linked lists
 * @h: linked list of type listint_t to be traversed
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
 size_t num = 0;

 while (h)
 {
 num++;
 h = h->next;
 }

 return (num);
}


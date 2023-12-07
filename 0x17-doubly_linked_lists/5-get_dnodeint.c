#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth index node of list.
 * @head: pointer to head of the list
 * @index: index of the node to search
 * Return: returns nth index node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;
	dlistint_t *temp;

	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == size)
	return (temp);
	size++;
	temp = temp->next;
	}
	return (NULL);
}

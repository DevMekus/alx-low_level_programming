#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node @position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: new node address or Null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *head_node;
	unsigned int i;

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		head_node = *h;
		i = 1;
		if (head_node != NULL)
			while (head_node->prev != NULL)
				head_node = head_node->prev;
		while (head_node != NULL)
		{
			if (i == idx)
			{
				if (head_node->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = head_node->next;
						new_node->prev = head_node;
						head_node->next->prev = new_node;
						head_node->next = new_node;
					}
				}
				break;
			}
			head_node = head_node->next;
			i++;
		}
	}

	return (new_node);
}

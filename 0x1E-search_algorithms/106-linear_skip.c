#include "search_algos.h"

/**
 * linear_skip - Function Searches for an algorithm in a sorted singly *
 * @list: A pointer to the  head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: Returns NULL If the value is not present or the head of the list is NULL, NULL. *
 *
 * Description: It Prints a value every time it is compared in the list. *
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *newNode, *jump_ptr;

    if (list == NULL)
        return (NULL);

    for (newNode = jump_ptr = list; jump_ptr->next != NULL && jump_ptr->n < value;)
    {
        newNode = jump_ptr;
        if (jump_ptr->express != NULL)
        {
            jump_ptr = jump_ptr->express;
            printf("Value checked at index [%ld] = [%d]\n",
                   jump_ptr->index, jump_ptr->n);
        }
        else
        {
            while (jump_ptr->next != NULL)
                jump_ptr = jump_ptr->next;
        }
    }

    printf("Value found between indexes [%ld] and [%ld]\n",
           newNode->index, jump_ptr->index);

    for (; newNode->index < jump_ptr->index && newNode->n < value; newNode = newNode->next)
        printf("Value checked at index [%ld] = [%d]\n", newNode->index, newNode->n);
    printf("Value checked at index [%ld] = [%d]\n", newNode->index, newNode->n);

    return (newNode->n == value ? newNode : NULL);
}
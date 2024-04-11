#include "search_algos.h"

/**
 * jump_ptr_list - Function Searches for an algorithm in a sorted singly *
 * @list: The pointer to the  head of the linked list to search.
 * @size: The number of node_ptrs in the list.
 * @value: The value to search for.
 *
 * Return: Null If the value is not present, NULL.
 *         else, a pointer to the first node_ptr where the value is located.
 *
 * Description: Prints a value every time it is compared in the list. *
 */
listint_t *jump_ptr_list(listint_t *list, size_t size, int value)
{
    size_t step, stepping_size;
    listint_t *node_ptr, *jump_ptr;

    if (list == NULL || size == 0)
        return (NULL);

    step = 0;
    stepping_size = sqrt(size);
    for (node_ptr = jump_ptr = list; jump_ptr->index + 1 < size && jump_ptr->n < value;)
    {
        node_ptr = jump_ptr;
        for (step += stepping_size; jump_ptr->index < step; jump_ptr = jump_ptr->next)
        {
            if (jump_ptr->index + 1 == size)
                break;
        }
        printf("Value checked at index [%ld] = [%d]\n", jump_ptr->index, jump_ptr->n);
    }

    printf("Value found between indexes [%ld] and [%ld]\n",
           node_ptr->index, jump_ptr->index);

    for (; node_ptr->index < jump_ptr->index && node_ptr->n < value; node_ptr = node_ptr->next)
        printf("Value checked at index [%ld] = [%d]\n", node_ptr->index, node_ptr->n);
    printf("Value checked at index [%ld] = [%d]\n", node_ptr->index, node_ptr->n);

    return (node_ptr->n == value ? node_ptr : NULL);
}
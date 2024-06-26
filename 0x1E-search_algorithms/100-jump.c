#include "search_algos.h"

/**
 * jump_search - Function Searches for a value in a sorted array *              
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: -1 If the value is not present or the array is NULL
 *
 * Description: Prints a value every time it is compared in the array.
 *              Uses the square root of the array size as the jump new_step.
 */

int jump_search(int *array, size_t size, int value)
{
    size_t i, jump, new_step;

    if (array == NULL || size == 0)
        return (-1);

    new_step = sqrt(size);
    for (i = jump = 0; jump < size && array[jump] < value;)
    {
        printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
        i = jump;
        jump += new_step;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

    jump = jump < size - 1 ? jump : size - 1;
    for (; i < jump && array[i] < value; i++)
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
    printf("Value checked array[%ld] = [%d]\n", i, array[i]);

    return (array[i] == value ? (int)i : -1);
}
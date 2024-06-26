#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 *                 of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         else, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t i, left_side, right_side;

    if (array == NULL)
        return (-1);

    for (left_side = 0, right_side = size - 1; right_side >= left_side;)
    {
        printf("Searching in array: ");
        for (i = left_side; i < right_side; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        i = left_side + (right_side - left_side) / 2;
        if (array[i] == value)
            return (i);
        if (array[i] > value)
            right_side = i - 1;
        else
            left_side = i + 1;
    }

    return (-1);
}
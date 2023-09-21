#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 *
 * @array: pointer to the first element of array
 * @size: size of array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (int i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
            else
                printf("\n");
        }

        if (array[mid] == value)
            return (mid);

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1); 
}

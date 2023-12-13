#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: the low index of the search interval
 * @high: the high index of the search interval
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t low, size_t high, int value) {
    size_t mid, i;

    while (low <= high) {
        mid = (high + low) / 2;

        printf("Searching in array: ");
        for (i = low; i <= high; i++) {
            if (i != low)
                printf(", %d", array[i]);
            else
                printf("%d", array[i]);
        }
        printf("\n");

        if (array[mid] < value)
            low = mid + 1;
        else if (array[mid] > value)
            high = mid - 1;
        else
            return mid;
    }

    return -1;
}

/**
 * exponential_search - Exponential search.
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value) {
    size_t i = 1, right;

    if (array == NULL)
        return -1;

    while (i < size && array[i] <= value) {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        i = i * 2;
    }

    right = (i < size) ? i : size - 1;
    printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
    return binary_search(array, i / 2, right, value);
}
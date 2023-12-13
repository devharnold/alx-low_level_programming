#include "search_algos.h"

/**
 * interpolation search - search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in an array
 * @value: value to search for
 * Return first index where value is located
 * and if value is not present in array or if array is NULL, function
 * must return -1
*/
int interpolation_search(int *array, size_t size, int value) {
    if (array == NULL)
        return -1;

    size_t low = 0;
    size_t high = size -1;

    while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high])) {
        size_t pos = low + ((double)(high - low) / (array[high] - array[low])) * (value - array[low]);

        printf("Comparing with array[%lu] = %d\n", pos, array[pos]);
    if (array[pos] < value)
        low = pos + 1;
    else if (value < array[pos])
        high = pos - 1;
    else 
        return (int)pos;
    }
    if (value == array[low])
        return (int)low;
    else 
        return -1;
}
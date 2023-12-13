#include "search_algos.h"

/**
 * binary search - Searches for a value in an array using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in an array
 * @value: value to search for
 * 
 * Return - index where value is located
 * array -> ascending order
 * if value !array or if array is NULL, function must return -1
 * 
*/
int binary_search(int *array, size_t size, int value){
    size_t i = 0, low =0, mid = 0, high = size -1;
    if (array == NULL)
        return -1;

    while (low <= high){
        mid = (high + low) / 2;
        i = low;

        printf("Search in array: ");
        for (; i <= high; i++){
            if (i != low)
                printf(", %d", array[i]);
            else
                printf(("%d", array[i]));
        }
        printf("\n");

        if (array[mid] < value)
            low = mid + 1;
        else if (array[mid] > value)
            high = mid -1;
        else
            return mid;
    }
    return -1;
}
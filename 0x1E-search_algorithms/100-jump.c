#include "search_algos.h"

/**
 * jump_search - search for a value in an array using the 
 * jump search algorithm
 * @array: the array to be searched
 * @size: size of the array to be searched
 * @value: value to be searched in the array
 * 
 * Return: If the value id found in the array, it will return 
 * the index of the first match.Otherwise, -1 and errno set appropriately
 * 
*/
int jump_search(int *array, size_t size, int value) {
    int val = sqrt(size), prev, step;
    if (!array){
        return -1;
    }
    prev = 0;
    step = val;
    while (step < (int)size && array[step] < value){
        prev = step;
        step += val;
    }
    while (prev <= step && prev < (int)size){
        if (array[prev] == value){
            return prev;
        }
        prev += 1;
    }
    return -1;
}
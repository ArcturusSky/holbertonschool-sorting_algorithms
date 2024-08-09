#include "sort.h"

/**
 * selection_sort - function that sorts an array of
 * integers in ascending order using the Selection sort algorithm
 * @array: array of ints
 * @size: size of array
 */
void selection_sort(int *array, size_t size) {
    if (array == NULL || size < 2)
        return;

    for (size_t i = 0; i < size - 1; i++) {
        size_t min_idx = i;

        // Find the index of the minimum element in the remaining unsorted array
        for (size_t j = i + 1; j < size; j++) {
            if (array[j] < array[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted array
        if (min_idx != i) {
            int temp = array[i];
            array[i] = array[min_idx];
            array[min_idx] = temp;

            // Print the array after each swap
            print_array(array, size);
        }
    }
}

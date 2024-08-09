#include "sort.h"

/**
 * swap_elements - Helper function to swap two integers
 * @first_element: Pointer to the first integer
 * @second_element: Pointer to the second integer
 */

void swap_elements(int *first_element, int *second_element)
{
	int temporary = *first_element;
	*first_element = *second_element;
	*second_element = temporary;
}

/**
 * lomuto_partition - Partitions an array using the Lomuto scheme
 * @array: The array to be partitioned
 * @start_index: The starting index of the segment to partition
 * @end_index: The ending index of the segment to partition
 *
 * Description: This function implements the Lomuto partition scheme for
 * the QuickSort algorithm. It selects the last element as the pivot and
 * rearranges the array such that all elements less than or equal to the
 * pivot are on the left, and all elements greater than the pivot are on
 * the right. The pivot is then placed in its correct sorted position.
 *
 * Return: The index of the pivot after partitioning
 */

int lomuto_partition(int array[], int start_index, int end_index)
{
	int pivot_value = array[end_index];
	int pivot_position = start_index - 1;
	int current_index;

	for (current_index = start_index; current_index < end_index; current_index++)
	{
		/** If the current element is less than or equal to the pivot */
		if (array[current_index] <= pivot_value)
		{
			pivot_position++;
			swap_elements(&array[pivot_position], &array[current_index]);
		}
	}
	/** Place the pivot in its correct position */
	swap_elements(&array[pivot_position + 1], &array[end_index]);
	return (pivot_position + 1);
}

/**
 * quick_sort_recursive - function that helps to sort an array
 * @array: array to sort
 * @low: lowest value
 * @high: highest
 *
 * Return: pivot_index
 */


void quick_sort_recursive(int *array, int low, int high)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = lomuto_partition(array, low, high);
		quick_sort_recursive(array, low, pivot_index - 1);
		quick_sort_recursive(array, pivot_index + 1, high);
	}
}

/**
 * quick_sort - function to sort an array
 * @array: array to sort
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	print_array(array, size);
	quick_sort_recursive(array, 0, size - 1);
}

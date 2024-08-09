#include "sort.h"

/**
 * swap - swaps things
 * @a: thing 1
 * @b: thing 2
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - does lomuto partition stuff
 * @array: array of ints
 * @size: size of array
 * @high: max int
 * @low: min int
 * Return: value of array after pivot
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot;
	int i, j;

	pivot = array[high];
	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != high)
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
}

/**
 * quick_sort_recursive - uses recursion to sort quickly
 * @array: array of ints
 * @size: size of array
 * @high: max int
 * @low: min int
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = lomuto_partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot_index - 1, size);
		quick_sort_recursive(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - sorts quickly
 * @array: array of ints
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	 quick_sort_recursive(array, 0, (int)size - 1, size);
}

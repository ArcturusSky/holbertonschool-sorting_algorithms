#include "sort.h"

/**
 * selection_sort - function that sorts an array of
 * integers in ascending order using the Selection sort algorithm
 * @array: array of ints
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	i = 0;
	j = 1;
	while (i < size - 1)
	{
		while (j <= size)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			j++;
		}
		i++;
		j = i + 1;
		print_array(array, size);
	}
}

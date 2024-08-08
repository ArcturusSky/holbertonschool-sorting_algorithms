#include "sort.h"

/**
 * bubble_sort - function that sorts an array of
 * integers in ascending order using the Bubble sort algorithm
 * @array: array of ints
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, i2;
	int tmp;

	i = 0;
	j = i + 1;
	i2 = 0;
	while (i2 != size)
	{
		while (i != size && j < size)
		{
			if (array[i] > array[j])
			{
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
			i++;
			j = i + 1;
		}
		i = 0;
		j = i + 1;
		i2++;
	}
}

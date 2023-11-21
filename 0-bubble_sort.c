#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 *		using the Bubble sort algorithm.
 *
 * @array: array of integers.
 * @size: size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, len = size;
	int tmp_num;
	int sorted = 0;

	if (array == NULL || size < 2)
		return;

	while (sorted == 0)
	{
		sorted = 1;
		for (i = 1; i < len; i++)
		{
			if (array[i] < array[i - 1])
			{
				tmp_num = array[i - 1];
				array[i - 1] = array[i];
				array[i] = tmp_num;
				print_array(array, size);
				sorted = 0;
			}
		}
		len--;
	}
}

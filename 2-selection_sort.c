#include "sort.h"

#include <stdio.h>
/**
 * selection_sort - sorts an array of integers in ascending order.
 * Description: Selection sort goes through the list,
 *              keeps finding the smallest number ahead,
 *              and swaps it with the current one to slowly sort everything
 *              from the front
 * @array: array.
 * @size: size of the array.
 */

void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;

		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			tmp = array[i];
			array[i] = *min;
			*min = tmp;
			print_array(array, size);
		}
	}
}

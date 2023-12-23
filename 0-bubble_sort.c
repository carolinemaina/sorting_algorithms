#include "sort.h"

/**
 * bubble_sort - Sorts array of integers using Bubble sort
 * @array: array to sort
 * @size: elements in array
 */
void bubble_sort(int *array, size_t size)
{
	size_t e1, e2;
	int new_pos;
	int swap;

	if (array == NULL || size < 2)
		return;

	for (e1 = 0; e1 < size - 1; ++e1)
		{
		swap = 0;

		for (e2 = 0; e2 < size - e1 - 1; ++e2)
		{
			if (array[e2] > array[e2 + 1])
			{
				new_pos = array[e2];
				array[e2] = array[e2 + 1];
				array[e2 + 1] = new_pos;

				swap = 1;
				print_array(array, size);
			}
		}

		if (swap == 0)
		break;
	}
}

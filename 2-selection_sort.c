#include "sort.h"

/**
 * selection_sort - sort ints using selection
 *
 * @array: array of ints
 * @size: number of elements
 *
 * Return: Void
 */


void selection_sort(int *array, size_t size)
{
	unsigned int x, y;
	int min, temp;

	if (!array)
		return;

	for (x = 0; x < size - 1; x++)
	{
		min = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[min])
				min = y;
		}

		if (array[min] != array[x])
		{
			temp = array[x];
			array[x] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}

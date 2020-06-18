#include "sort.h"
/**
 * bubble_sort - sort array using bubble_sort
 *
 * @array: array of integers of size
 * @size: the sze of the array
 *
 * Return: Void
 */


void bubble_sort(int *array, size_t size)
{
	int temp;
	unsigned int  x, y;

	/* check if array exists */
	if (!array)
		return;

	/* loop and sort */
	for (x = 0; x < size;)
	{
		for (y = 0; y < size - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				print_array(array, size);
			}
		}
		x++;
	}
}

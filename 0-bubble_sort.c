#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 *
 * @array: Array to sort
 * @size: size of the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp, swapped;

	if (size <= 1)
		return;

	for (i = 0; i < size; i++)
	{
		swapped = 0;
		for (j = 0; j  < size; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = array[j];
				swapped = 1;
				print_array(array, size);
			}
			if (swapped == 0)
				break;
		}
	}
}

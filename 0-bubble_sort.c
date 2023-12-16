#include "sort.h"
/**
 * bubble_sort - funct sorts 'arr' of integers
 *	in ascending order using Bubble sort alg,
 * @array: pnter to the arr,
 * @size: the arr's size,
 */
void bubble_sort(int *array, size_t size)
{
	size_t l, t;
	int q;
	int tm_p;

	if (array == NULL || size <= 1)
		return;
	for (l = 0; l < size - 1; ++l)
	{
		q = 0;
		for (t = 0; t < size - l - 1; ++t)
		{
			if (array[t] > array[t + 1])
			{
				tm_p = array[t];
				array[t] = array[t + 1];
				array[t + 1] = tm_p;

				print_array(array, size);
				q = 1;
			}
		}
		if (!q)
			break;
	}
}

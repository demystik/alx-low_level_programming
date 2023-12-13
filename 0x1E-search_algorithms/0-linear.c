#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using LSA
 * @array: pointer to the first element of the array
 * @size: number of element in the array
 * @value: value to search for
 *
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (value == array[index])
			return (index);

	}
	return (-1);
}

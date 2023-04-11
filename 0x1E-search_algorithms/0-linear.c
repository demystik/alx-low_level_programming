#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints using LSA
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: value to search for
 * Return: the first index where the value is located
 */

int linear_search(int *array, size_t size, int value)
{
size_t index;

index = 0;

if (array == NULL)
	return (-1);
while (!(index == size))
{
	printf("value checked array[%ld] = [%d]\n", index, array[index]);
	if (array[index] == value)
		return (index);
	index++;
}
return (-1);
}
#include <stdio.h>
#include "search_algos.h"

/**
 * b_search - subbinary search function
 * @ptr: pointer to the array
 * @value: value to search for
 * @l: left index
 * @r: right index
 * Return: return the index
 */
int b_search(int *ptr, int value, size_t l, size_t r)
{
size_t i = l;
int t, mid = l + (r - l) / 2;


if (l > r)
	return (-1);

t = 0;
while (ptr[i] <= ptr[r])
{
	if (t == 0)
		printf("Searching in array: ");
	if (ptr[i] == ptr[r])
		printf("%d", ptr[i]);
	else
		printf("%d, ", ptr[i]);
	i++;
	t = 1;
}
printf("\n");

if (ptr[mid] == value)
	return (ptr[mid]);
else if (ptr[mid] > value)
	return (b_search(ptr, value, l, mid - 1));
else
	return (b_search(ptr, value, mid + 1, r));
}

/**
 * binary_search - searches for value in a sorted array of integers using BSA
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
size_t l, r;
int index;

l = array[0];
r = array[size - 1];
index = b_search(array, value, l, r);
return (index);
}

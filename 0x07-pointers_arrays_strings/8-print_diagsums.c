#include "main.h"

/**
 * print_diagsums - This function prints the sum of the two diagonals of a square
 * @a: this pointer to an array
 * @size: the size of an array
 * Return: no return
 */

void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

for (i = 0; i < (size * size); i++)
{
if (i % (size + 1) == 0)
sum1 += *(a + i);
if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
sum2 += *(a + i);
}
printf("%d, %d\n", sum1, sum2);

}


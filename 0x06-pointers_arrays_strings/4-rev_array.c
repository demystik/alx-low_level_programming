#include "main.h"

/**
 * reverse_array - The function reverse array of integer
 * @a: The array of integers
 * @n: The number of numbers of element
 */

void reverse_array(int *a, int n)
{
n--;

while(n >= 0)
{
printf("%i", a[n]);
if (n != 0)
{
printf(", ");
}
n--;
}
}

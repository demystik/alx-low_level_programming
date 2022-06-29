#include "main.h"

/**
 * power_operation - returns the natural square root of a number
 * @n: input number
 * @c: iterator
 * Return: square root or -1.
 */
int power_operation(int n, int c)
{
	int sqrt;
	sqrt = c * c;
	
	if (sqrt > n)
		return (-1);
	if (n == sqrt)
		return (c);
	return (0 + power_operation(n, c + 1));
}


/**:
 * _sqrt_recursion - This function returns the natural square root of a number
 * @n: The number
 *
 * Return: the return the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

return (power_operation(n, 2));
}

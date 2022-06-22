#include "main.h"


/**
 * factorial - this function returns the factorial of a given number
 * @n: The input number
 *
 * Return: The factorial of the input number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));

}

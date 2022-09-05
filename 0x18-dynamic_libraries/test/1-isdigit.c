#include "main.h"

/**
 * _isdigit - This program checks for digit
 * @c: The input
 * Description: To check for digit
 * Return: return 1 if its digit and 0 if otherwise
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);
else
	return (0);
}

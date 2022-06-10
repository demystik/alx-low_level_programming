#include "main.h"

/**
 * _isupper - This program checks for upper case
 * @c: This input
 * Description: This program checks for upper case
 * Return: return 1 if its uppers and 0 if otherwise
 */

int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);

}

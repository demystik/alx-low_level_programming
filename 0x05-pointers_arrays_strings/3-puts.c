#include "main.h"

/**
 * _puts - The function that prints a string t stdout
 * @str: The pointer to a char
 *
 * Return: nothing upon executions
 */

void _puts(char *str)
{
int count;

for (count = 0; str[count] != '\0'; count++)
{
_putchar(str[count]);

}
_putchar('\n');
}

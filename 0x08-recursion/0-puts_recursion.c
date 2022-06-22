#include "main.h"

/**
 * _puts_recursion - This function prints a string followed by a new line
 * @s: This is a pionter to the string
 * Description: the above is enough
 * Return: return void
 */
int n = 0;
void _puts_recursion(char *s)
{

if(s[n] == '\0')
{
putchar('\n');
return;
}

else
{
putchar(s[n]);
n++;
_puts_recursion(s);
}



}

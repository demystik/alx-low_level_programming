#include "main.h"

/**
 * main - Entry point
 *
 * Description: FizzBuzz test
 * Return: void
 */

int main(void)
{
int n;

for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 == 0)
{
printf("%s", "FizzBuzz");
}
else if (n % 3 == 0)
{
printf("%s", "Fizz");
}
else if (n % 5 == 0)
{
printf("%s", "Buzz");
}
else
{
printf("%i", n);
}
if (n != 100)
printf(" ");
}
printf("\n");
return (0);
}

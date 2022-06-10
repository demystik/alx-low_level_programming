#include "main.h"

/**
 * main - Entry point
 *
 * Description: FizzBuzz test
 * Return: void
 */

int main()
{
int n, m;

for (n = 1; n <= 100; n++)
{
if(n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz ");
}
else if (n % 3 == 0)
{
printf("Fizz ");
}
else if (n % 5 == 0)
{
printf("Buzz ");
}
else
{

printf("%i ",n);
}
}
printf("\n");
return 0;
}

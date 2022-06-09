#include <stdio.h>

/**
 * main - The entry points of the programs
 *
 * Description: This program prints the first 50 fibonacci numbers
 * Return: Always success
 */

int main(void)
{
unsigned long int num1;

unsigned long int num2;

int count;

unsigned long int res;

num1 = 0;
num2 = 1;
count = 1;

while (count <= 98)
{
res = num1 + num2;
num1 = num2;
num2 = res;

printf("%lu", res);
if (count != 50)
{
printf(", ");
}

count++;
}
putchar('\n');

return (0);

}

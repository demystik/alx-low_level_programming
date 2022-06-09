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

unsigned long int res;

int count;

count = 1;

num1 = 0;
num2 = 1;

while (count <= 50)
{
res = num1 + num2;
num1 = num2;
num2 = res;

printf("%lu, ", res);
count++;
}

return (0);
}

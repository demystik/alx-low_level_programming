#include <stdio.h>

/**
 * main - The entry points of the programs
 *
 * Description: This program prints the first 50 fibonacci numbers
 * Return: Always success
 */

int main(void)
{
int num1;

int num2;

int res;

int count;

count = 1;

num1 = 0;
num2 = 1;

while (count <= 50)
{
res = num1 + num2;
num1 = num2;
num2 = res;

printf("%d, ", res);
count++;
}

return (0);
}

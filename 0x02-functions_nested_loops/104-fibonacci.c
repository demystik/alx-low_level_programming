#include <stdio.h>

/**
 * main - The entry points of the programs
 *
 * Description: This program prints the first 50 fibonacci numbers
 * Return: Always success
 */

int main(void)
{
int num1, num2;

num1 = 0;
num2 = 1;
int result;
int count = 1;

while (count <= 98)
{
result = num1 + num2;
num1 = num2;
num2 = result;

printf("%d, ", result);
count++;
}
putchar('\n');

return (0);

}

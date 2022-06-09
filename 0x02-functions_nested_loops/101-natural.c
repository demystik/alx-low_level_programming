#include <stdio.h>


/**
 * main - Entry point of the program
 *
 * Description: This program prints the sum of multiples of 3 and 5
 * Return: void
 */

int main(void)
{
int count, num;

count = 1;
num = 0;

while (count < 1024)
{
if (count % 3 == 0 || count % 5 == 0)
num += count;


count++;
}

printf("%d\n", num);

return (0);
}

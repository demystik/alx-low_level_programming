#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Description: A program that pints the alphabet in lowercase
 * Return: Always
 */



int main(void)

{

int n;

srand(time(0));

n = rand() - RAND_MAX/2
if(n > 0)
	printf("%i is positive", n);
else if(n < 0)
	printf("%i is negative", n);
else
	printf("%i is zero", n);

return (0);

}

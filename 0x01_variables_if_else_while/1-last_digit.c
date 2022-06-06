#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

int i;

i = n % 10;
if(i < 5)
	printf("Last digit of %i is %i and is greater than 5", n, i);if(i == 0)
	printf(

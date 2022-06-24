#include <stdio.h>

/**
 * main - Entry point for a program that prints all arguments it recieves
 * @argc: The argument count
 * @argv: The argument vector
 * Return: the lists of all args
 */

int main(int argc, char *argv[])
{
int i;

i = 0;

while (i != argc)
{
	printf("%s", argv[i]);
	if (i != argc - 1)
		printf("\n");
	i++;
}

return (0);
}

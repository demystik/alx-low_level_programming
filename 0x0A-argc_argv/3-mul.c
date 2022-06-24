#include <stdio.h>

/**
 * main - Entry point of a program that multiply two args
 * @argc: The argument count
 * @argv: The argument vector
 * Return: The result of the multiplication
 */

int main(int argc, char *argv[])
{
int result;

if (argc != 3)
{
	printf("Error\n");
	return (1);
}
else
result = (argv[1] * argv[2]);
printf("argv1 = %d and argv2 = %d\n", (**argv + 1), (**argv + 2));
printf("%d\n", result);



return (0);
}

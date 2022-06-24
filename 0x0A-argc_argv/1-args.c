#include <stdio.h>

/**
 * main - This program prints the number of arguments passed
 *
 * @argc: The argument count
 * @argv: The argument vector
 * Return: the number of args
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

return (0);
}

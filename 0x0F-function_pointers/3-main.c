#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the calculator
 * @argc: argurment counter
 * @argv: argurement vector *
 * Return: 0 on success 1 on error
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Errord\n");
		exit(99);
	}
	

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Errorer\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));


return (0);
}

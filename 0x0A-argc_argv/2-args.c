#include <stdio.h>

/**
 * main - Entry point for a program that prints all arguments it recieves
 * @argc: The argument count
 * @argv: The argument vector
 * Return: the lists of all args
 */

int main(int argc, char *argv[])
{
int count;
for (count = 0; count < argc; count++)
printf(" %d - %s\n", count, argv[count]);
return (0);
}

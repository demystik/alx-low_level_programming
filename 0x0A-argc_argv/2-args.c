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
for (i = 0; i < argc; i++)
printf(" %d - %s\n",i, argv[i]);
return (0);

return (0);
}

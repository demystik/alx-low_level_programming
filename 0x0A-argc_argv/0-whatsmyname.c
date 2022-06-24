#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - This program prints its name
 *
 * @argv: argument vector
 * @argc: argument count
 * Return: nothing to return
 */

int main(int argc, char *argv[])
{
UNUSED(argc);
printf("%s", argv[0]);
return (0);
}

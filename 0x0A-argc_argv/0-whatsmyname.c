#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - This program prints its name
 *
 * Description: to print its name
 * Return: nothing to return
 */

int main(int argc, char *argv[])
{
UNUSED(argc);
printf("%s", argv[0]);
return (0);
}

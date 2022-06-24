#include <stdio.h>
/**
* main - prints all arguments it receives.
* @argc: argument count.
* @argv: argument vector.
* Return: 0 - success.
*/
int main(int argc, char *argv[])
{
int k;
for (k = 0; k < argc; k++)
printf(" %d - %s\n", k, argv[k]);
return (0);
}

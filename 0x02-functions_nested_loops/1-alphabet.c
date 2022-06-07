#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Function that prints alphabets
 *
 * Descripion: to print alphabets
 * Return: Always 0
 */

void print_alphabet(void)
{
int count;
for (count = 'a'; count <= 'z'; count++)
{
 putchar(count);
 putchar('\n');
}

}

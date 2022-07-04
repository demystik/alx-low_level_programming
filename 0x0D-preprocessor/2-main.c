#include <stdio.h>
#include <stdlib.h>
/**
 * filename - the name of the file
 *
 * Description: to print file name
 * Return: nothing
 */

void filename(void)
{
	printf("%s\n", __FILE__);
}
/**
 * main - entry point
 * void: means nothing
 * Return: nothing
 */
int main(void)
{
	filename();
	return (0);
}

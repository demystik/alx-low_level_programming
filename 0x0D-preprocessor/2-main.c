#include <stdio.h>
#include <stdlib.h>
void filename()
{
	printf("%s\n",__FILE__);
}
int main(void)
{
	filename();
	return (0);
}

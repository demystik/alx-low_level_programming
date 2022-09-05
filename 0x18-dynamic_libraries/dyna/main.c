#include <stdio.h>

int addnum(int a, int b);
int subnum(int a, int b);

int main(int ac, char *av[])
{
	int total;

	total = addnum(5, 7);
	printf("total of add is %d\n", total);
	printf("total of sub is %i\n", subnum(5, 7));

return (0);
}

#include <stdio.h>

int main(void)
{
int n;
int m;
n = 45;

if (n <= 0)
{
putchar('\n');
}
else
{
for (m = 1; m <= n; m++)
{
putchar('_');
}
putchar('\n');
}

}

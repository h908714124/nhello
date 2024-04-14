#include <stdio.h>

void do_thing(int *x)
{
	(*x)++;
}

int main()
{
	int x = 0;
	x++;
	printf("%d\n", x);
	return 0;
}

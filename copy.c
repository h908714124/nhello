#include <stdio.h>

void do_thing(int *x)
{
	(*x)++;
}

int main()
{
	int x = 0;
	do_thing(&x);
	printf("%d\n", x);
	return 0;
}

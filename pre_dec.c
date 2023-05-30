#include<stdio.h>
int main()
{
	int x = 58, y = 63;
	int p = --x - --y;

	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", p);

	return 0;
}

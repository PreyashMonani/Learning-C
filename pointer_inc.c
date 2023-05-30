#include<stdio.h>
int main()
{
	int a[] = {5, 7, 10, 15, 22, 30, 21, 44};
	int *p = &a[0];
	//printf("%d\n", *(p++));
	//printf("%d\n", *p);
	printf("%d\n", *(++p));
}

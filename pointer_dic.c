#include<stdio.h>
int main()
{
	int a[] = {5, 7, 22, 30, 20, 44, 20, 41};
	int *p = &a[2];
	printf("%d\n", *(--p));
	printf("%d\n", *(p--));
}

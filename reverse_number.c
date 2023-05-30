#include<stdio.h>
int main()
{
	int N = 5;
	int a[N], *p;
	printf("Enter 5 elements :  ", N);
	for(p=a; p<= a+N-1; p++)
		scanf("%d", p);

	printf("Elements in reverse order:\n");
	for(p = a+N-1; p>=a; p--)
		printf("%d\n", *p);
}

#include<stdio.h>
void find(int);
main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	find(num);
}

void find(int n)
{
	if(n%2==0)
		printf("%d is even\n", n);
	else
		printf("%d is odd\n", n);
}

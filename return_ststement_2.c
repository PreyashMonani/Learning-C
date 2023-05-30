#include<stdio.h>
int f(int);
main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num<0)
	{
		printf("No factorial for negative number\n");
	}
	else
	{
		printf("factorial of %d is %ld\n", num, f(num));
	}
}
int f(int n)

{
	int i, fact=1;
	if(n==0)
		return 1;
	for(i = n; i >1; i--)
		fact = fact * i;
		return fact;
}


#include<stdio.h>
int sum(int);
main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Sum of Digits of %d is %d\n", num, sum(num));
}

int sum(int n)
{
	int i, sum = 0, rem;
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n/=10;
	}
	return (sum);
}

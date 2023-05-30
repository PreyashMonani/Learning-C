#include<stdio.h>
int main()
{
	int num, digit, i, x;
	int sum = 0, diff = 0;
	//printf("Enter number: ");
	//scanf("%d", &num);
	//sum = num;
	//diff = num;

	for (i=1; i<=5; ++i)
	{
		printf("Enter number #%d: ", i);
		scanf("%d", &num);

		if (sum)
		{
			sum = sum + num;
		}

		if (diff)
		{ 
			diff = diff - num;
		}
	}

	printf("The sum is %d\n", sum);
	printf("The difference is %d\n", diff);
}

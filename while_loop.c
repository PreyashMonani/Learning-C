#include<stdio.h>
int main()
{
	int i = 1, j;
	
	printf("Enter the value of J: ");
	scanf("%d", &j);

	while (i <= j)
	{
		printf("%d\n", i);
		++i;
	}
}

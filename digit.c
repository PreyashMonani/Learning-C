#include<stdio.h>
int main()
{
	int i, number, input, sum, diff, x;
	
	for (i=1; i<=5; ++i)
	{
	printf("Enter #%d: ", i);
	scanf("%d", &input);
	}
	printf("\n Enter 1 for sum and 0 for minus: ");
	scanf("%d", &x);
	
	if(x > 0){
	printf("\n SUM of total number is %d\n", number);
	}

	else{
	printf("\nDIFFERENCE of total number is %d\n", number);
	}
}

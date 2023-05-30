#include<stdio.h>
int main()
{
	int a, b, c, d, e, sum, diff, x;
	
	printf("Enter 1st value: ");
	scanf("%d", &a);
	printf("Enter 2nd value: ");
	scanf("%d", &b);
	printf("Enter 3rd value: ");
	scanf("%d", &c);
	printf("Enter 4th value: ");
	scanf("%d", &d);
	printf("Enter 5th value: ");
	scanf("%d", &e);
	printf("Enter 1 for sum and 0 for minus: ");
	scanf("%d", &x);

	//sum = a+b+c+d+e;
	//diff = a-b-c-d-e;	
	
	switch(x)
	{
		case 1: ("%.1d + %.2d + %.3d + %.4d + %.5d", a, b, c, d, e, a+b+c+d+e);
			break;
		case 2: ("%d", diff);
			break;
	}
	//printf("Enter 1 for sum and 0 for minus: ");
	//scanf("%d\n", &x);
	//if(x > 0){
	//printf("\nsum = %d", sum);
	//}
//	else{
//	printf("\ndiff = %d\n", diff);
//	}
}

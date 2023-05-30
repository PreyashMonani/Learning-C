#include<stdio.h>

int main()

{
	int a, b, c, d, e, f, g;

	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter secound number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);
	printf("Enter forth number: ");
	scanf("%d", &d);
	printf("Enter fifth number: ");
	scanf("%d", &e);

	printf("Enter 1 for sum 0 for minus: ");
	scanf("%d", &f);
	switch(f){
		case 1: g=a+b+c+d+e;
			printf("Total sum is %d\n", g);
			break;
		case 2: g=a-b-c-d-e;
			printf("Total Diff is %d\n", g);
			break;
		default:
			printf("Error!!!!\n");
				
	}

}

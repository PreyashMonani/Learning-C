#include<stdio.h>
int main()
{
	int x, y;

	printf("Enter two values for X and Y: ");
	scanf("%d%d", &x, &y);

	if (x > y){
	printf("X \'%d\' is Greater then Y \'%d\'\n", x, y);
	}

	else if (x < y){
	printf("Y \'%d\' is Greater then X \'%d\'\n", y, x);
	}

	else {
	printf("X \'%d\' is equal to Y \'%d\'\n", x, y);
	}
}

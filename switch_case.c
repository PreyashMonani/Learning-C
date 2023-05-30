#include<stdio.h>
int main() 
{
	int x;
	printf("Enter value between 0 to 9: ");
	scanf("%d", &x);

	switch(x) {

	case 1:	printf("one\n");
		break;
	case 2: printf("two\n");
		break;
	case 3: printf("three\n");
		break;
	case 4: printf("four\n");
		break;
	case 5: printf("five\n");
		break;
	case 6: printf("six\n");
	case 7: printf("seven\n");
	case 8: printf("eight\n");
	case 9: printf("nine\n");
	default: printf("zero\n");
}
}

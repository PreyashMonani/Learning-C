#include<stdio.h>
int main()
{
	int number;
	while (1){
	printf("Enter a Number: ");
	scanf("%d", &number);

	if (number == 0){
	break;
	}

	if ((number %2) !=0){
	continue;
	}
	printf("%d\n", number);
	}
}

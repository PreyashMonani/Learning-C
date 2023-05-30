#include<stdio.h>
void change(int *num)
{
	printf("Before adding value inside function num = %d\n", *num);
	(*num) += 35;
	printf("After adding value inside function num = %d\n", *num);
}

int main ()
{
	int x=15;
	printf("Before function call x = %d\n", x);
	change(&x);
	printf("After function call x = %d\n", x);
}

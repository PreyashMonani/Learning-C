#include<stdio.h>

int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mult(int a, int b)
{
	return a*b;
}
int div(int a, int b)
{
	return a/b;
}

int main()
{
	int ch, a, b, total;
	int (*fptr[10])(int, int)={add,sub,mult,div};
	
	printf("0 for add\n 1 for sub\n 2 for mult\n 3 for div\n");
	printf("Enter choice: ");
	scanf("%d", &ch);
	printf("Enter 2 numbers for function:\n");
	scanf("%d%d", &a, &b);
	total = (*fptr[ch])(a, b);
	printf("output is %d\n", total);
}

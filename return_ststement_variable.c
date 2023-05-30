#include<stdio.h>
void func1(void);
void func2(void);
int a, b=8;
main()
{
	printf("Inside main(): a=%d, b=%d\n", a, b);
	func1();
	func2();
}
void func1(void)
{
	printf("Inside func1(): a=%d, b=%d\n", a, b);
}
void func2(void)
{
	int a=6;
	printf("Inside func2(): a=%d, b=%d\n", a, b);
}

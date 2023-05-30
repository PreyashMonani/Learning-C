#include<stdio.h>
void main()
{
	display();
	display();
	display();
	display();
	display();
}
void display()
{
	static int x=0;
	x += 10;
	printf("\nX = %d\n", x);
}

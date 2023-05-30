#include<stdio.h>

int main()
{
	char x;
	int y;
	float p, q;

	x = 'A';
	y = 5;
	p = 14.5;
	q = 16.5;

	//printf("%c value of Char", x,  &x);
	//printf("%d value of int", y, &y);
	//printf("%f value of float", p, &p);
	//printf("%f valur of float", q, &q);
	printf("%c value of char %u.\n", x, &x);
	printf("%d value of int %u.\n", y,  &y);
	printf("%f value of float %u.\n", p,  &p);
	printf("%f value of float %u.\n", q,  &q);

	return 0;

}

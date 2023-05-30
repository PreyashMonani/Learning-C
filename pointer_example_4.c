#include<stdio.h>
int main()
{
	char *cities[] = {"Jamnagar", "Rajkot", "Ahmedabad"};
	int **i = &cities[2];
	printf("%c\n", **i);
}

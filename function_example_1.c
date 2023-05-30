#include<stdio.h>


	int totalSum (int num1, int num2, int num3)
	{
		int total;
		total = num1+num2+num3;
	}

	int main(){
	{
		int num1 = 5, num2 = 10, num3 = 15;
		int total = totalSum(num1, num2, num3);
		printf("%d\n", total);
	}
}

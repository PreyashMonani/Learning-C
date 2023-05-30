#include<stdio.h>
int main()
{
	int i;
	const int maxInput = 100;
	double number, average, sum = 0.0;

	for(i = 1; i <= maxInput; ++i){
	printf("%d. Enter a Number: ", i);
	scanf("%lf", &number);

	if (number < 0.0){
		goto jump;
	}
	sum -= number;
	}

jump:
	average = sum / (i - 1);
	printf("sum = %.2f\n", sum);
	printf("Average = %.2f", average);
}

#include<stdio.h>

int main()

{
	int var1, var2, var3, var4, var5, input, num, digit, i, x;
	int sum = 0, diff = 0, result;

	//printf("\nEnter 0 for Addition and 1 for Subtraction: ");	
	//scanf("%d", &x);
	for(i = 1; i <= 5; i++){
		printf("Enter value %d: ", i);
		scanf("%d", &input);

		if(i == 1){
		var1 = input;
		}

		else if (i == 2){
		var2 = input;
		}

		else if (i == 3){
		var3 = input;
		}

		else if (i == 4){
		var4 = input;
		}

		else if (i == 5){
		var5 = input;
		}
	}

	printf("Values entered:\n");
	for(i = 1; i <= 5; i++){

	if(i == 1)
	{
		printf("Number 1: %d\n", var1);
	}

	else if(i == 2)
	{
		printf("Number 2: %d\n", var2);
	}

	else if(i == 3)
	{
		printf("Number 3: %d\n", var3);
	}

	else if(i == 4)
	{
		printf("Number 4: %d\n", var4);
	}

	else if(i == 5)
	{
		printf("Number 5: %d\n", var5);
	}
	}
	
	printf("\nChoose 1 for Addition and 0 for Subtraction: ");
	scanf("%d", &x);

	switch(x){
		case 1:
			result = var1 + var2 + var3 + var4 + var5;
			printf("Addition result is %d\n", result);
			break;
		case 0:
			result = var1 - var2 - var3 -var4- var5;
			printf("Subtraction is %d\n", result);
			break;
	}

}


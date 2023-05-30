#include<stdio.h>
int main()
{
	int arr[5] = {10, 20, 30, 40, 50};
	int num = 70;
	printf("Elemrnt in Array: \n");
	for (int i = 0; i < 5; i++){
		if(i == 2){
			printf("%d\t", arr[i]+num);
			arr[i]+=num;
		}
		else{
		printf("%d\t", arr[i]);
		}
	}
	printf("\n");
	for (int i = 0; i < 5; i++){
		printf("%d\t", arr[i]);}
	printf("\n");
	return 0;
}

#include<stdio.h>
#define MAX 50
int binarySearch(int arr[], int size, int item);
void main(void)
{
	int i, size, item, arr[MAX], index;
	
	printf("Enter the sumber of elements : ");
	scanf("%d", &size);

	printf("Enter the elements : ");
	for(i=0; i<size; i++)
		scanf("%d", &arr[i]);

	printf("Enter the item to be searched : ");
	scanf("%d", &item);
	index=binarySearch(arr, size, item);

	if(index == -1)
		printf("%d not found in array\n", item);
	else
		printf("%d found at position %d\n", item, index);
}

int binarySearch(int arr[], int size, int item)
{
	int low=0, up=size-1, mid;
	while(low<=up)
	{
		mid = (low + up) / 2;
		if(item > arr[mid])
			low = mid + 1;
		else if (item < arr[mid])
			up = mid - 1;
		else
			return mid;
	}
	return -1;
}

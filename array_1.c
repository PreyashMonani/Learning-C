#include<stdio.h>
int main()
{
	float i = 1.5;
int pre[5] = {10,20,30,40,50};
int pre1[] = {1, 2, 3, 4, 5};
float pre2[5];
for (int i = 0; i < 5; i++ ){
	pre2[i] = (float) i * 2.1;
}
printf("Element at pre[0]: %d\n", pre[0]);
printf("Element at pre1[1]: %d\n", pre1[1]);
printf("Element at pre2[2]: %f\n", pre2[2]);

return 0;
}

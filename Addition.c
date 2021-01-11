#include<stdio.h>
#include<stdlib.h>

void main(){
	int a,b,result;
	printf("enter first number");
	scanf("%d", &a);
	printf("enter second number");
	scanf("%d", &b);
	result = a + b ;
	printf("the sum of a and b is : %d \n", result);
	result = a * b ;
	printf("the multiplication of a and b is : %d \n",result);
	result = a / b;
	printf("the division of a by b is : %d \n",result);
	result = a % b;
	printf("the rest of the division of a by b is : %d",result);
}

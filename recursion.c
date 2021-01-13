#include <stdio.h>

int multiply(int a,int b);

int main (int argc, char **argv) {
	long a,b,result;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	result = multiply(a,b);
	printf("%d",result);
}
int multiply(int a, int b){
	if (b ==0){
		return 0; 
	}
	else if (b % 2 != 0){ 
		return multiply(a-1 , b) + a;
	}

		
	else if (b % 2 == 0){
		return multiply(a*2 ,b/2);
	}
	return 0;
}

	


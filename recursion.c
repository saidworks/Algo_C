#include <stdio.h>

int multiply(int a,int b){

	if (b ==0){
		return 0; 
	}
	else if (b % 2 != 0){ 
		return multiply(a-1 , b) + a;
	}

		
	else if (b % 2 == 0){
		return multiply(a*2 ,b/2);
	}

}

	

int main (int argc, char **argv) {
	float a,b;
	printf("enter first number");
	scanf("%f",&a);
	printf("enter second number");
	scanf("%f",&b);
	multiply(a,b);
	return 0;
}


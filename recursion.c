#include <stdio.h>

//declaration de fonction
int multiply(int a,int b);

	

int main () {
	int a,b;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	multiply(a,b);
	return 0;
}

// definition de fonction
int multiply(int a,int b){

	if (b ==0){
		return 0; 
	}
	else if (b % 2 != 0){ 
		return printf("%d",multiply(a-1 , b) + a);
	}

		
	else if (b % 2 == 0 && b != 0){
		return multiply(a*2 ,b/2);
	}

}


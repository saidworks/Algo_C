#include <stdio.h>

//declaration de fonction
int multiply(int a,int b);

	

int main () {
	int a,b;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	printf("%d",multiply(a,b));
	return 0;
}

// definition de fonction
int multiply(int a,int b){
	if (b ==0){
		return 0; 
	}
<<<<<<< HEAD
	else if (b % 2 != 0 && b>0 ) { 
		a = a;
		b = b-1;
		return multiply(a , b-1) + a;
=======
	else if (b % 2 != 0 ){ 
		a=a;
		b = b-1;
		return multiply(a , b) + a;
>>>>>>> ebb907a8897d120a1ecdc3ce4c0692112d2b9faa
	}
/*
fun(36,7) = fun(36,6) + 36
          = fun(72,3) + 36
		  = fun(72,2) + 36 + 72
		  = fun(144,1) +108 
		  = fun(144,0) +144 +108
*/
		
	else if (b % 2 == 0 && b > 0 ) {
		a = a * 2;
		b = b / 2;
		return multiply(a*2 ,b/2);
	}

}


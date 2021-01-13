#include <stdio.h>


int howOld(){
	int age;
	printf("How old are you?");
	scanf("%d",&age);
	return age;
} 

int multiply(int n1, int n2){
	int i=0;
//	int n1_multiples[15],n2_multiples[15];
	for(i=0;i<11;i++){
		printf("%d * %d= %d ,%d * %d= %d \n",n1,i, n1 * i ,n2,i, n2 * i);
	}
//	return n1_multiples,n2_multiples;
	
} 
int main(){
	int i,n1,n2;
	int N1_multiples,N2_multiples;
	printf("you are %d years \n",howOld());
	printf("enter first number \n");
	scanf("%d",&n1);
	printf("enter second number \n");
	scanf("%d",&n2);
	multiply(n1, n2);
//	for (i=0;i<11;i++){
//		printf(" %d , %d \n",N1_multiples,N2_multiples);
//	}
	return 0;
}


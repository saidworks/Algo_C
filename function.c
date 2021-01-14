#include <stdio.h>
#include "fonctions.h"



int main(){
	int i,n1,n2;
	int N1_multiples,N2_multiples;
	printf("you are %d years \n",howOld());
	printf("enter first number \n");
	scanf("%d",&n1);
	printf("enter second number \n");
	scanf("%d",&n2);
	multiply(n1, n2);
	return 0;
}





#include <stdio.h>
#include <stdlib.h>


#define false 0
#define true !false
typedef int bool;
#define max(a,b) (a>b)
int main(void){
	int nbr1,nbr2;
	printf("entrer le premier num�ro \n");
	scanf("%d",&nbr1);
	printf("entrer le deuxi�me num�ro \n");
	scanf("%d",&nbr2);
	if(max(nbr1,nbr2)){
		printf("True");
	}
	else{
		printf("False");
	}
}

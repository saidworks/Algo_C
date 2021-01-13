#include <stdio.h>

int main(void){
	int nbr;
	int i;
	printf("Saisir un nombre");
	scanf("%d",&nbr);
	for(i=0;i<11;i++){
		printf("%d * %d = %d \n",nbr,i,nbr*i);
	}
}

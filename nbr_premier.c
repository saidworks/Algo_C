#include <stdio.h>

#define false 0
#define true !false
typedef int bool;


int main(void){
	int nbr;
	int i = 1;
	bool premier;
	printf("entrer un nombre");
	scanf("%d",&nbr);
	for(i=1;i<nbr;i++){
		if(nbr % i == 0 && (i != nbr) && (i != 1)){
			printf("le nombre %d n'est pas premier",nbr);
			premier = false;
			break;
				
		}

	}
	if (premier != false){
		printf("le nombre %d est premier",nbr);
	}
		
	
}

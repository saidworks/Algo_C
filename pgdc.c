#include <stdio.h>

int main(void){
	int i=1,nbr1,nbr2,pn,gn,reste,quotient;
	printf("veuillez saisir un nombre");
	scanf("%d",&nbr1);
	printf("veuillez saisir un nombre");
	scanf("%d",&nbr2);
	if(nbr1>nbr2){
		gn = nbr1;
		pn = nbr2;
	}
	else{
		gn = nbr2;
		pn = nbr1;
	}
	while(reste != 0){
		quotient = gn / pn ;
		reste = gn % pn;
		printf("step %d. %d = %d * %d + %d \n",i,gn,quotient,pn,reste);
		i++;
		if (reste > 0){
			gn = pn;
			pn = reste;
			}
	}
	
	printf("le plus grand diviseur commun de %d et %d est: %d",nbr1,nbr2,pn);
}

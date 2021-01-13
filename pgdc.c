#include <stdio.h>

int main(void){
	int i,a,b,pgdc;
	printf("veuillez saisir un nombre");
	scanf("%d",&a);
	printf("veuillez saisir un nombre");
	scanf("%d",&b);
	for(i=1;i<=a && i<=b;i++){
		if (a % i == 0 && b % i ==0){
			pgdc = i;
		}
	}
	printf("le plus grand diviseur commun de %d et %d est: %d",a,b,pgdc);
}

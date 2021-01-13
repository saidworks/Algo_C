#include <stdio.h>

int main(void){
	int nombre;
	int somme;
	float i = 0;
	float moyenne;
	while (nombre != -1){
	printf("saisir un nombre a ajouter au série");
	scanf("%d",&nombre);
	somme += nombre;
	i++;
	}
	if (nombre == -1) {
		moyenne = (somme+1)/(i-1); // denominator must be float to get result as float
		printf(" i est %d \n",i); 
		printf("la moyenne des nombres saisies est %f",moyenne);
	}
	
}

#include <stdio.h>

int main() {
	int a,b;
	float result;
	char operation;
	printf("Entrer la valeur du nombre A");
	scanf("%d",&a);
	printf("Entrer la valeur du nombre B");
	scanf("%d",&b);
	printf("choisissez une opération :");
	scanf("%c",&operation);
	switch(operation){
		case '+':
			result = a + b;
			printf("le résultat %f",result);
		case '*':
			result = a * b;
			printf("le résultat %f",result);
		case '-':
			result = a - b;
			printf("le résultat %f",result);
		case '/':
			result = a / b;
			printf("le résultat %f ",result);
		default:
			printf("opération non valide");		
	}	
}

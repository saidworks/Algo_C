#include <stdio.h>

int main() {
	int a,b;
	float result;
	char operation;
	printf("Entrer la valeur du nombre A");
	scanf("%d",&a);
	printf("Entrer la valeur du nombre B");
	scanf("%d",&b);
	printf("choisissez une op�ration :");
	scanf("%c",&operation);
	switch(operation){
		case '+':
			result = a + b;
			printf("le r�sultat %f",result);
		case '*':
			result = a * b;
			printf("le r�sultat %f",result);
		case '-':
			result = a - b;
			printf("le r�sultat %f",result);
		case '/':
			result = a / b;
			printf("le r�sultat %f ",result);
		default:
			printf("op�ration non valide");		
	}	
}

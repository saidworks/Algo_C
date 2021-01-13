#include <stdio.h>
#include <math.h>
int convertDecimalToOctal(int decimalNumber);
int main() {
	int a,b;
	float result;
	char operation;
	printf("Entrer la valeur du nombre a");
	scanf("%d",&a);
	printf("Entrer la valeur du nombre b");
	scanf("%d",&b);
	printf("la valeur de a,b en octet est %d,%d ",convertDecimalToOctal(a),convertDecimalToOctal(b));
	printf("la valeur de a,b en hexadecimal est %x,%x ",a,b);
	printf("choisissez une operation :");
	scanf(" %c",&operation);
	switch(operation){
		case '+':
			result = a + b;
			printf("le resultat de l'addition en hexadecimal de %d et %d est %f \n",a,b,result);
		case '*':
			result = a * b;
			printf("le resultat de multiplication en hexadecimal de %d par %d est %f \n",a,b,result);
		case '-':
			result = a - b;
			printf("le resultat de soustraction en hexadecimal de %d par %d est %f \n",a,b,result);
		case '/':
			result = a / b;
			printf("le resultat de division en hexadecimal de %d par %d est %f \n",a,b,result);
		default:
			printf("operation non valide");		
	}	
}

int convertDecimalToOctal(int decimalNumber){
	
	int octalNumber=0,i=1;
	while (decimalNumber != 0){
		octalNumber += (decimalNumber % 8 * i);
		decimalNumber /= 8;
		i*=10;
	}
	return octalNumber;
}

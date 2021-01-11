#include <stdio.h>
#include <math.h>

int main(void){
	const float pi = 3.141;
	float r,D,P,S;
	printf("saisir s'il vous plait le rayon du cercle");
	scanf("%f",&r);
	D = r * 2;
	P = 2 * pi * r;
	S = pow(r , 2) * pi;
	printf("le diametre du cercle est : %f le perimetre %f et le surface %f",D,P,S);
	
}

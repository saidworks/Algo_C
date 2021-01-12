#include <stdio.h>
#include <math.h>
int solution(int a,int b,int c);

int main(){
	int a,b,c;
	float delta,x_1,x_2; 
	printf("veuillez entrer la valeur de a");
	scanf("%d",&a);
	printf("veuillez entrer la valeur de b");
	scanf("%d",&b);
	printf("veuillez entrer la valeur de c");
	scanf("%d",&c);
	delta = solution(a,b,c);
//	printf("%d",delta);
	if(delta < 0){
		printf("Il n'y a pas de solution réelle pour cette équation");
	}
	else if (delta == 0){
		x_1 = -b/(2*a);
		printf("il y a une seule solution x = %d",x_1);		
	}
	else {
		x_1 = (-b -sqrt(delta))/(2*a);
		x_2 = (-b + sqrt(delta))/(2*a);
		printf("il y a deux solution pour l'équation : %d , %d)",x_1,x_2);
	}
	return 0;

	
}

int solution(int a,int b, int c){
	return pow(b,2) - 4*a*c;
}

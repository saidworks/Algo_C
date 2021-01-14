#include <stdio.h>

int PrintStar(n){
	int k = 0;
	while (2*k + 1 <= n){	
	printf("*");
	k++;
	}
}
int PrintVoid(n){
	int space;
	for(space=1;space <=n-1;++space){
		printf(" ");
	}
}



int main(){
	int i,rows;
	printf("enter le nombre des lignes");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		PrintStar(i);
		PrintVoid(i);
		printf(" \n");
		}
	return 0;
}




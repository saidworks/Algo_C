#include <stdio.h>

int multiple(int a,int b);

int main() {
	int a,b;
	int x,y,t = 0;
	
	printf("Saisier le premier nombre");
	scanf("%d",&a);
	printf("Saisier le second nombre");
	scanf("%d",&b);
	if (b<a) {
		x = a;
		y = b;
	} else {
		y = a;
		x = b;
	}
	while( y != 0) {
		if (y % 2 ==1) {
			y--;
			t += x;

			printf("= %d * %d + %d \n",x,y,t);
		} else {
			x *= 2;
			y /= 2;
			printf("= %d * %d + %d \n",x,y,t);
		}
	}

	return 0;

}







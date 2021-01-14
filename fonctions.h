


int howOld(){
	int age;
	printf("How old are you?");
	scanf("%d",&age);
	return age;
} 

int multiply(int n1, int n2){
	int i=0;
//	int n1_multiples[15],n2_multiples[15];
	for(i=0;i<11;i++){
		printf("%d * %d= %d ,%d * %d= %d \n",n1,i, n1 * i ,n2,i, n2 * i);
	}
//	return n1_multiples,n2_multiples;
	
} 


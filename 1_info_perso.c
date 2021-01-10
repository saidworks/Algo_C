#include <stdio.h>

int main(void){
	char nom[100],prenom[100],sex[100],phone[100];
	int age;
	printf("Enter your name \n");
	scanf("%s",&nom);
	printf("Enter your age \n");
	scanf("%d",&age);
	printf("What is your sex  \n");
	scanf("%s",&sex);
	printf("Phone number  \n");
	scanf("%s",&phone);
	printf("Your name is %s, you are %d, you are a %s and your phone number is %s",nom,age,sex,phone);
}

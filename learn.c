#include <stdio.h>
//my first program on C
int main(void){
	printf("Hello, World! \n");
	int age = 0;
	age = 37.5;
	printf("%d \n",age); // float variable get tranformed automatically because we specified int type in the definition of variable
	// unsigned char means positive values char has max of 255
	unsigned char j = 255;
 	j = j + 10;
  	printf("%d \n", j); /* 9 */
  	char i = 127;
  	i = i + 10;
  	printf("%u \n",i); // C does not protect over going off limits on variable type ( 1 byte for char 2 byte/ for int and  short, and 4 bytes for long)
  	
	/*    
	for int:
	unsigned char will range from 0 to at least 255
    unsigned int will range from 0 to at least 65,535
    unsigned short will range from 0 to at least 65,535
    unsigned long will range from 0 to at least 4,294,967,295 
    for float:
    float => 32 bits= 24 bits precision + 8 bits for exponents
    float double => 64 bits = 53 bits precision + 11 bits for exponents
    float double long => 80 bits = 64bits precision + 16 bits for exponent
	*/
	
	printf("char size: %lu bytes\n", sizeof(char));
	printf("int size: %lu bytes\n", sizeof(int));
	printf("short size: %lu bytes\n", sizeof(short));
	printf("long size: %lu bytes\n", sizeof(long));
	printf("float size: %lu bytes\n", sizeof(float));
	printf("double size: %lu bytes\n", sizeof(double));
	printf("long double size: %lu bytes\n", sizeof(long double));
	
	// declare a constant
	const int AGE = 42 ;
	printf("my age is %d years \n", AGE);
	#define  AGE 45
	printf("my wife's age is %d years \n",AGE);	
	
	// operators 
	int a = 2;
	int b;
	b = a++; /* b is 2, a is 3 */
	b = ++a;/* b is 4, a is 4 */
	b += 2; 
	a++;
	b--;
	printf("a equal %d and b equal %d \n",a,b);
	
	/* C does not have a boolean type of variable * but it can be defined as follows:*/
	#define BOOL char
	#define FALSE 0
	#define TRUE 1
	int k = TRUE;
	printf("%d",k);
	

	
}

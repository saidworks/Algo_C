#include<stdio.h>
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else {

        return fibo(n-1)+fibo(n-2);
    }
}

int main()

{

   int n;
   printf("Entrez la valeur de n \n");
   scanf("%d",&n);  
   printf("la suite de fibonnaci du nombre %d est : %d",n,fibo(n));

  return 0;
}

#include <stdio.h>


int main()
{

    int a,b;
    float result;
    char operation;

    printf("Entrer la valeur du nombre a :");
    scanf("%d",&a);

    printf("Entrer la valeur du nombre b :" );
    scanf("%d", &b);
    printf("choisissez une operation :");
    scanf(" %c", &operation);

    switch(operation)
    {

        case '+':
            result = a + b;
            printf("Les resultat est :%f",result);
            break;
        case '-':
            result = a - b;
            printf("Les resultat est :%f",result);
            break;
        case '*':
            result = a * b;
            printf("Les resultat est :%f",result);
            break;

        case '/':
            result = (float)a/(float)b;
            printf("Les resultat est :%f",result);
            break;
        default :
            printf("L'operation que vous avez entree est invalide !!!");
    }

    return 0;
}

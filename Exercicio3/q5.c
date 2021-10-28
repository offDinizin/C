#include <stdio.h>



int main(){


    int continuar=1;
    float media,a,b,c;
    do {
        printf("Insira o numero 1: \t");
        scanf("%f", &a);
        printf("Insira o numero 2: \t");
        scanf("%f", &b);
        printf("Insira o numero 3: \t");
        scanf("%f", &c);
            media= (a+b+c)/3;
            printf("\nA media eh:%.2f \t", media);
        printf("\nQuer continuar?\n1-Sim 2-Nao\t");
        scanf("%d", &continuar);
    } while (continuar==1);  
}